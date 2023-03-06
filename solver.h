#include "conditions.h"

#ifndef _solver_h_
#define _solver_h_
class Solver {
    public:
	Solver(const Condition& c);
	void solve();
	int answer();
	const vector<int>&  solution();

    private:
			 			
};
#endif
