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

void knapsack::add(int j)
	{ k[j] = 1; }

void knapsack::del(int j)
        { k[j] = 0; }

bool knapsack::is_full(vector<int> p)
	{ return P >= P_max; }
