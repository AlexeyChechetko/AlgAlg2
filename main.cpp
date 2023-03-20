#include "conditions.h"
#include "knapsack.h"
#include "solver.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {


	freopen("./input_knapsack/input1", "r", stdin);


	vector<int> c; //вектор ценностей
	vector<int> p; //вектор весов
	int K_P;       //максимально допустимый вес
	int n;         //размер входных данных(сколько товаров в магазине)
	
	cin >> n >> K_P;
	c.resize(n);
	p.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i] >> p[i];
	}


	solver S(c, p, K_P, n);

	return 0;
}
