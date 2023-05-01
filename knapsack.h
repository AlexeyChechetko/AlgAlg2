#ifndef KNAPSACK_H_INCLUDED
#define KNAPSACK_H_INCLUDED

#include <vector>

using namespace std;

//k -- вектор из 0 и 1, 0 -- товар не в рюкзаке, 1 -- товар в рюкзаке
//P -- текущий вес товаров в рюкзаке
//P_max -- максимальный вес, который вмещается в рюкзак
//add() -- добавить товар в рюкзак
//del() -- удалить товар из рюкзака
//is_full() -- true, если рюкзак заполнен или переполнен; false, если еще есть место

class knapsack {
	public:
		knapsack(const int n, const int K_P);
		void add(int j, int p_j, int c_j);
		void del(int j, int p_j, int c_j);
		bool is_full();
	private:
		vector<int> k;
		int P_max;
		int P;
		int C;
};

#endif
