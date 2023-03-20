#ifndef SOLVER_H_INCLUDED
#define SOLVER_H_INCLUDED

#include "conditions.h"
#include "knapsack.h"
#include <vector>

using namespace std;

class solver {
	public:
		solver(const vector<int>& c, const vector<int>& p, const int K_P, const int n);
		void solve();
		void print_ans();
	private:
		conditions C;
		knapsack K;
		vector<int> answer;
		int n;
		int Max_c;
};

#endif

