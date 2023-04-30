#include "knapsack.h"

using namespace std;

knapsack::knapsack(int n, int K_P)
{ 
	P_max = K_P;
	P = 0;
	k.resize(n);
        for (int i = 0; i < n; ++i)
		{ k[i] = 0; }	
		
}

void knapsack::add(int j, int p_j)
	{ k[j] = 1; P += p_j; }

void knapsack::del(int j, int p_j)
        { k[j] = 0; P -= p_j; }

bool knapsack::is_full()
	{ return P >= P_max; }

vector<int> knapsack::ret_k()
	{ return k; }
