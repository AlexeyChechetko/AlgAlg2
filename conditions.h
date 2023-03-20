#ifndef CONDITIONS_H_INCLUDED
#define CONDITIONS_H_INCLUDED

#include <vector>

using namespace std;

class conditions {
	public:
		conditions(const vector<int>& c, const vector<int>& w, const int K_W);
	private:
		vector<int> c;
		vector<int> w;
		int K_W;
};

#endif
