#include "conditions.h"
#include <vector>
#include <iostream>

using namespace std;

int main() {


	freopen("./input_knapsack/input1", "r", stdin);


	vector<int> v; //вектор ценностей
	vector<int> w; //вектор весов
	int K;         //максимально допустимый вес
	int n;         //размер входных данных(сколько товаров в магазине)
	
	cin >> n >> K;
	v.resize(n);
	w.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}

	conditions the_cond(v, w, K);

	return 0;
}
