#include <iostream>
#include "solver.h"

using namespace std;

solver::solver(const vector<int>& c, const vector<int>& p, const int K_P, const int n) : C(c, p, K_P, n), K(n)
	{ answer.resize(n); this -> n = n; Max_c = 0; }

void solver::solve()
	{}

void solver::print_ans()
{
	cout << Max_c << endl;
	for (int i = 0; i < n; ++i)
		cout << answer[i] << " ";
	cout << endl;

}
