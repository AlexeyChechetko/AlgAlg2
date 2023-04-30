#ifndef SOLVER_H_INCLUDED
#define SOLVER_H_INCLUDED

#include "conditions.h"
#include "knapsack.h"

using namespace std;

//C -- улосвие задачи
//K -- рюкзак
//f() -- функция, минимум которой ищем         | общ. методы
//gener_k0() -- генерируем начальное "решение" | общ. методы
//SA(int m) -- метод имитации отжига; m -- параметр алгоритма, а именно кол-о T_i в последовательности
//N(s, k) -- функция окр-и
//T_j(T) -- генератор последовательности T_j
//KC() -- вывести цену рюкзака

class solver {
	public:
		solver(const vector<Goods>& g, const int K_P, const int n);
		void SA(int m, int n);
		int f(const vector<int> k, const int n);
		void gener_k0(const int n);
		vector<int> N(vector<int> s, int k, int n);
		double T_j(double T);
		void KC();
	private:
		conditions C;
		knapsack K;
};

#endif

