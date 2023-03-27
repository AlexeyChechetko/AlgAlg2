#include "conditions.h"

using namespace std;

conditions::conditions(const vector<int>& c, const vector<int>& p, const int K_P, const int n)
{

	this -> c = c;
	this -> p = p;
	this -> K_P = K_P;
	this -> n = n;	

}

int conditions::get_ci(int i)
	{ return c[i]; }

int conditions::get_pi(int i)
	{ return p[i]; }

int conditions::get_KP()
	{ return K_P; }
