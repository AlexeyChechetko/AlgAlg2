#include "knapsack.h"

using namespace std;

knapsack::knapsack(int n)
{ 
	size = n;
	k.resize(n);
        for (int i = 0; i < n; ++i)
		k[i] = 0;	
}

void knapsack::add(int j)
	{ k[j] = 1; }

void knapsack::del(int j)
        { k[j] = 0; }

