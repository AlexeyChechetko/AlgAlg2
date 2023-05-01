#include "conditions.h"
#include "knapsack.h"
#include "solver.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {


	freopen("./input_knapsack/input10", "r", stdin);


	vector<Goods> g; 
	int K_P;      
	int n;       
	
	cin >> n >> K_P;
	g.resize(n);
	for (int i = 0; i < n; i++) 
		{ cin >> g[i].c >> g[i].p; }


	solver S(g, K_P, n);

	int m = 100;
	S.SA(m);


	return 0;
}
