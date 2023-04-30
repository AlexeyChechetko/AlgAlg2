#ifndef CONDITIONS_H_INCLUDED
#define CONDITIONS_H_INCLUDED

#include <vector>
#include "goods.h"

using namespace std;

//g -- вектор товаров
//K_P -- максимально допустимый вес товаров в рюкзаке
//n -- размер входных данных(сколько товаров в магазине)
//get_gi() -- возвращает i товар
//get_KP() -- возвращает K_P
//get_n() -- возвращает кол-о товаров 
//max_c() -- вернет max цену товара

class conditions {
	public:
		conditions(const vector<Goods>& g, const int K_P, const int n);
		Goods get_gi(int i);
		int get_KP();
		int get_n();
		int max_c();
	private:
		vector<Goods> g;
		int K_P;
		int n;
};

#endif
