#include "solver.h"

solver::solver(const conditions& cond) {

}

void solver::solve(const conditions& cond) {
	vector<int> K;
	K.resize(n);
	K[0] = 0;
	for (int w = 1; w <= W; ++w) {
		K[w] = 0;
		for (int i = 0; i < n; ++i) {
			if (w[i] < w && K[w] < K[w - w[i]] + v[i]) //+ проверка, что ... 
				K[w] = K[w - w[i]] + v[i];
		}
	}
}

int Solver::answer() {

}

const vector<int>&  Solver::solution() {

}
