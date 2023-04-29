#include "conditions.h"
#include "knapsack.h"
#include "solver.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {


	freopen("./input_knapsack/input18", "r", stdin);


	vector<int> c; 
	vector<int> p; 
	int K_P;      
	int n;       
	
	cin >> n >> K_P;
	c.resize(n);
	p.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i] >> p[i];
	}


	solver S(c, p, K_P, n);

	S.solve();

	S.print_ans();

	return 0;
}
