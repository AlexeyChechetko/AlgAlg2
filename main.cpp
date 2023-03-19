#include "conditions.h"
//#include "knapsack.h"
//#include "solver.h"
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
	int W; //максимально допустимый вес
	int n;
	
	cin >> n >> W;
	v.resize(n);
	w.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}

	conditions the_cond(v, w, K);

	solver the_sol(the_cond);
	//the_solver.solve();

	/*vector<int>& solution = the_solver.solution();
	cout << the_solver.answer() << 0 << endl;
	for (int i = 0; i < n; i++) {
		cout << solution[i] << endl;
	}*/


	return 0;
}
