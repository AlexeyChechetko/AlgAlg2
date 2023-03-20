#include <ctime>
#include <iostream>
#include "solver.h"

using namespace std;

solver::solver(const vector<int>& c, const vector<int>& p, const int K_P, const int n) : C(c, p, K_P, n), K(n)
	{ answer.resize(n); this -> n = n; Max_c = 0; }

int solver::f(const vector<int> a)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum -= a[i] * C.get_ci(i);
	return sum;
}


void solver::local_search_method()
{
	vector<int> ans_tmp;
	int i;
	bool flag = true;
	while (flag) {
		for (i = 0; i < n; ++i) {
			ans_tmp[i] = (ans_tmp[i] + 1) % 2;
			if (f(ans_tmp) < f(answer)) {
				answer = ans_tmp;
				break;
			}
			if (i == n - 1)
				flag = false;	
		}
	}

	Max_c = -f(answer);
}

void solver::solve()
{
	srand( time(0) );
	for (int i = 0; i < n; ++i) {
		answer[i] = rand() % 2;
		cout << answer[i] << " ";
	}
	cout << endl;
	local_search_method();
}

void solver::print_ans()
{
	cout << Max_c << endl;
	for (int i = 0; i < n; ++i) {
		cout << answer[i] << " ";
	} 
	cout << endl;

}
