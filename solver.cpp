#include <iostream>
#include <cmath>
#include <ctime>
#include "solver.h"
#include <random>

using namespace std;

solver::solver(vector<Goods>& g, int K_P, int n) : C(g, K_P, n), K(n, K_P)
{ 

}

int solver::f(knapsack& kp)
{
	return -kp.get_C();
}

void solver::gener_k0()
{
	srand( time(0) );

	int i;
	
	for (i = 0; i < C.get_n(); ++i)
	{ 
		K.add(i, C.get_gi(i)); 
	}	

	while (K.is_full())
	{
		i = rand() % C.get_n();
		K.del(i, C.get_gi(i));
	}
}

void solver::N(knapsack& kp, int j)
{
	kp.reset(K.get_k(), K.get_P(), K.get_C());

	if (kp.get_k()[j] == 0)
	{
		kp.add(j, C.get_gi(j));
	}
	else
	{
		kp.del(j, C.get_gi(j));
	}

}

double solver::T_j(double T)
{
	double f_min = 0.7, f_max = 0.9,  f = (double)rand() / RAND_MAX;

	return ( f_min + f * (f_max - f_min) ) * T;
}

void solver::SA(int m)
{
	srand( time(0) );

	int i, j;	
	
	gener_k0();
	
	knapsack kp(C.get_n(), C.get_KP());	
	kp.reset(K.get_k(), K.get_P(), K.get_C());
	

	default_random_engine generator;

	int F = f(K);
        int Fp = 0;

	double T = C.max_c();

	for (i = 0; i < m; ++i) 
	{
		for (j = 0; j < C.get_n(); ++j)
		{
			N(kp, j);
			
			if (kp.is_full())
				continue;

			Fp = f(kp);
			
			bernoulli_distribution distribution( exp((F - Fp) / T) );	
			
			if ( (Fp < F) || ( (Fp - F < T) && distribution(generator) ) )
			{
				K.reset(kp.get_k(), kp.get_P(), kp.get_C());
				F = Fp;
				break;
			}

		}
	
		T = T_j(T);
	}

	cout << "cost: " << K.get_C() << endl;
	cout << "pound: " << K.get_P() << endl;

	
}

void solver::ans_correct()
{
	int pg = 0;
	int cg = 0;

	for (int i = 0; i < C.get_n(); ++i)
	{
		if (K.get_k()[i])
		{
			pg += C.get_gi(i).p;
			cg += C.get_gi(i).c;

		}
	}
	
	//cout << "pg = " << pg << endl;
	//cout << "cg = " << cg << endl;

	if (pg == K.get_P() && cg == K.get_C())
	{
		cout << "Okey!" << endl;
	}
	cout << endl;
}

