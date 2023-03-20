#ifndef KNAPSACK_H_INCLUDED
#define KNAPSACK_H_INCLUDED

#include <vector>

using namespace std;

class knapsack {
	public:
		knapsack(int n);
		void add(int j);
		void del(int j);
	private:
		vector<int> k;
		int size;
};

#endif
