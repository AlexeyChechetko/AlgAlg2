#ifndef CONDITIONS_H_INCLUDED
#define CONDITIONS_H_INCLUDED

#include <vector>

class Conditions {
	public:
		Conditions(const vector<int>& v, const vector<int>& w, const int K);
	private:
		vector<int> v;
		vector<int> w;
		int K;
};

#endif
