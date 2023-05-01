#include <iostream>
#include <cmath>
#include <ctime>
#include "solver.h"
#include <random>

using namespace std;

solver::solver(const vector<Goods>& g, const int K_P, const int n) : C(g, K_P, n), K(n, K_P)
{ 
	gener_k0(); 
}

int solver::f(const vector<int> k)
{
	int i;
	int sum = 0;
	
	for (i = 0; i < C.get_n(); ++i)
	{ 
		sum -= k[i] * C.get_gi(i).c; 
	}

	return sum;
}

void solver::gener_k0()
{
	srand( time(0) );

	int i;
	
	for (i = 0; i < C.get_n(); ++i)
	{ 
		K.add(i, C.get_gi(i).p, C.get_gi(i).c); 
	}	

	while (K.is_full())
	{
		i = rand() % C.get_n();
		K.del(i, C.get_gi(i).p, C.get_gi(i).c);
	}
}

vector<int> solver::N(vector<int> s, int j)
{
	vector<int> sp;
	sp.resize(C.get_n());
	sp = s;

	sp[j] = ((sp[j] + 1) % 2);

	return sp;
}

double solver::T_j(double T)
{
	double f_min = 0.7, f_max = 0.9,  f = (double)rand() / RAND_MAX;

	return ( f_min + f * (f_max - f_min) ) * T;
}

void solver::SA(int m, int n)
{
	srand( time(0) );

	int i, j;	

	vector<int> sp;
	sp.resize(n);
	
	default_random_engine generator;

	int F = f(K.get_k()), Fp = 0;

	double T = C.max_c();

	for (i = 0; i < m; ++i) 
	{
		for (j = 0; j < n; ++j)
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

	K.change_k(s);
	
}


