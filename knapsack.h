#ifndef KNAPSACK_H_INCLUDED
#define KNAPSACK_H_INCLUDED

#include <vector>
#include "goods.h"

using namespace std;

//k -- вектор из 0 и 1, 0 -- товар не в рюкзаке, 1 -- товар в рюкзаке
//P -- текущий вес товаров в рюкзаке
//C -- цена товаров в рюкзаке
//P_max -- максимальный вес, который вмещается в рюкзак
//add() -- добавить товар в рюкзак
//del() -- удалить товар из рюкзака
//is_full() -- true, если рюкзак заполнен или переполнен; false, если еще есть место
//get_P() -- получить вес товаров в рюкзаке
//get_C() -- получить цену товаров в рюкзаке
//get_k() -- получит вектор k

class knapsack {
	public:
		knapsack(int n, int K_P);
		void add(int j, Goods g_j);
		void del(int j, Goods g_j);
		bool is_full();
		int get_P();
		int get_C();
		vector<int> get_k();
		void reset(vector<int> a, int pg, int cg);
	private:
		vector<int> k;
		int P_max;
		int P;
		int C;
};

#endif
