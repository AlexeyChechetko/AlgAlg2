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
//N() -- функция окр-и
//T_j() -- генератор последовательности T_j

class solver {
	public:
		solver(vector<Goods>& g, int K_P, int n);
		void SA(int m);
		int f(knapsack& kp);
		void gener_k0();
		void N(knapsack& kp, int j);
		double T_j(double T);
		void ans_correct();
	private:
		conditions C;
		knapsack K;
};

#endif

