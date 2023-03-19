#include "conditions.h"

#ifndef _solver_h_
#define _solver_h_
class solver {
    public:
	solver(const conditions& cond);
	void solve();
	int answer();
	const vector<int>&  solution();

    private:
			 			
};
#endif
