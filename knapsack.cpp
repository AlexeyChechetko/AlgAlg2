#include "knapsack.h"

using namespace std;

knapsack::knapsack(int n, int K_P)
{ 
	P_max = K_P;
	P = 0;
	C = 0;
	k.resize(n);
        for (int i = 0; i < n; ++i)
	{ 
		k[i] = 0; 
	}	
		
}

void knapsack::add(int j, Goods g_j)
{ 
	if (k[j] == 1)
	{
		return;	
	}
	else
	{
		k[j] = 1; 
		P += g_j.p; 
		C += g_j.c; 
	}
}

void knapsack::del(int j, Goods g_j)
{
	if (k[j] == 0)
	{
		return;	
	}
	else
	{
		k[j] = 0; 
		P -= g_j.p; 
		C -= g_j.c; 
	}
}

bool knapsack::is_full()
{ 
	return P >= P_max; 
}

int knapsack::get_P()
{
	return P;
}

int knapsack::get_C()
{
	return C;
}

vector<int> knapsack::get_k()
{
	return k;
}

void knapsack::reset(vector<int> a, int pg, int cg)
{
	k = a;
	P = pg;
	C = cg;
}
