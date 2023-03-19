#include "conditions.h"
using namespace std;

#ifndef _solver_h_
#define _solver_h_
class solver {
    public:
	solver(const conditions& cond);
	void solve();
	int answer();
	const vector<int>&  solution();

    private:
	vector<int> K;
	bool* inc;
	int n;
	int summ;
			 			
};
#endif
