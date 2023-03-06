#include "conditions.h"
#include "knapsack.h"
#include "solver.h"
// read conditions
// 		Knapsack
// solve the problem
// 	class:
// 		Solver
// 			ctor(const Condition& )
// 			void solve()
// 			int answer()
// 			const vector<int>&  solution()
// print results
// 	
#include <vector>
#include <iostream>

using namespace std;

int main() {
	vector<int> v; 
	vector<int> w;
	int K;
	int n;
	
	cin >> n;
	cin >> k;
	v.resize(n);
	w.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		cin >> w[i];
	}

	Conditions the_cond(v, w, K);
	Solver the_solver(cond);
	the_solver.solve();

	vector<int>& solution = the_solver.solution();
	cout << the_solver.answer() << 0 << endl;
	for (int i = 0; i < n; i++) {
		cout << solution[i] << endl;
	}


	return 0;
}
