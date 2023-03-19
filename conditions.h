#ifndef CONDITIONS_H_INCLUDED
#define CONDITIONS_H_INCLUDED

#include <vector>

class conditions {
	public:
		conditions(const vector<int>& v, const vector<int>& w, const int K);
	private:
		vector<int> v;
		vector<int> w;
		int K;
};

#endif
