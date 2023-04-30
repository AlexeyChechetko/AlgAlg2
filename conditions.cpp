#include "conditions.h"

using namespace std;
         
conditions::conditions(const vector<Goods>& g, const int K_P, const int n)
{

	this -> g = g;
	this -> K_P = K_P;
	this -> n = n;	

}

Goods conditions::get_gi(int i)
	{ return g[i]; }

int conditions::get_KP()
	{ return K_P; }

int conditions::get_n()
	{ return n; }

int conditions::max_c()
{
	int max = -1;

	for (int i = 0; i < n; ++i)
		{ max = (max < g[i].c) ? g[i].c : max; }

	return max;
}
