#include "solver.h"
using namespace std;

solver::solver(const conditions& cond) {
	K.resize(cond.get_K_W() + 1);
	inc = new bool[cond.get_n()];
	this -> n = cond.get_n();
	summ = 0;
}

void solver::solve() {
	K[0] = 0;
	for (int w = 1; w <= W; ++w) {
		K[w] = 0;
		for (int i = 0; i < n; ++i) {
			if (w[i] < w && K[w] < K[w - w[i]] + v[i]) {
				K[w] = K[w - w[i]] + v[i];
				inc[i] = true;
			}	
			else {
				inc[i] = false;
			}
		}
	}
}

int Solver::answer(const conditions& cond) {
	for (int i = 0; i < n; ++i) {
		if inc[i]
			summ += cond.get_c()[i];
	}
	cout << summ << endl;
}

const vector<int>&  Solver::solution() {

}
