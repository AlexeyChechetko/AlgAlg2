#include <cmath>
#include <ctime>
#include "solver.h"
#include <random>

using namespace std;
using ll = long long;

solver::solver(const vector<Goods>& g, const int K_P, const int n) : C(g, K_P, n), K(n, K_P)
	{ gener_k0(n); }

int solver::f(const vector<int> k, const int n)
{
	ll sum = 0;
	for (int i = 0; i < n; ++i)
		{ sum -= k[i] * C.get_gi(i).c; }
	return sum;
}

void solver::gener_k0(const int n)
{
	srand( time(0) );

	int i;
	
	for (i = 0; i < n; ++i)
		{ K.add(i, C.get_gi(i).p); }	

	while (K.is_full())
	{
		i = rand() % n;
		K.del(i, C.get_gi(i).p);
	}
}

vector<int> solver::N(vector<int> s, int k, int n)
{
	vector<int> sp;
	sp.resize(n);
	sp = s;

	sp[k] = ((sp[k] + 1) % 2);

	return sp;
}

double solver::T_j(double T)
{
	double f_min = 0.7;
	double f_max = 0.9;

	double f = (double)rand() / RAND_MAX;
	
	return ( f_min + f * (f_max - f_min) ) * T;
}

void solver::SA(int m, int n)
{
	default_random_engine generator;
	
	srand( time(0) );
	
	vector<int> s;
	s.resize(n);
	s = K.ret_k();

	vector<int> sp;
	sp.resize(n);

	int F = f(s, n);
	int Fp = 0;

	double T = C.max_c();

	for (int i = 1; i < m; ++i) 
	{
		for (int k = 0; k < n; ++k)
		{
			sp = N(s, k, n);
			Fp = f(sp, n);
			
			bernoulli_distribution distribution( exp((F - Fp) / T) );	
			
			if ( (Fp < F) || ( (Fp - F < T) && distribution(generator) ) )
			{
				s = sp;
				F = Fp;
				break;
			}

			T = T_j(T);
		}
	}	
	
}

