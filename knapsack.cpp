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

void knapsack::add(int j, int p_j, int c_j)
{ 
	if (k[j] == 1)
	{
		return;	
	}
	else
	{
		k[j] = 1; 
		P += p_j; 
		C += c_j; 
	}
}

void knapsack::del(int j, int p_j, int c_j)
{
	if (k[j] == 0)
	{
		return;	
	}
	else
	{
		k[j] = 0; 
		P -= p_j; 
		C -= c_j; 
	}
}

bool knapsack::is_full()
{ 
	return P >= P_max; 
}

