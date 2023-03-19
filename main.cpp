#include "conditions.h"
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


	freopen("./input_knapsack/input1", "r", stdin);


	vector<int> v; //вектор ценностей
	vector<int> w;//вектор весов
	int K; //максимально допустимый вес
	int n;
	
	cin >> n >> K;
	v.resize(n);
	w.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}

	conditions the_cond(v, w, K);

	solver the_sol(the_cond);
	the_sol.solve();

	the_sol.answer();

	return 0;
}
