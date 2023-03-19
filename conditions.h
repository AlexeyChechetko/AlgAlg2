#ifndef CONDITIONS_H_INCLUDED
#define CONDITIONS_H_INCLUDED

#include <vector>

class conditions {
	public:
		conditions(const vector<int>& c, const vector<int>& w, const int K_W);
		int get_n();
		int get_K_W();
		vector<int> get_c();
	private:
		vector<int> c;
		vector<int> w;
		int K_W;
};

#endif
