#include "conditions.h"

conditions::conditions(const vector<int>& c, const vector<int>& w, const int K_W)
{

	this -> c = c;
	this -> w = w;
	this -> K_W = K_W; 	

}

int conditions::get_n() 
{
	return c.max_size();
}

int conditions::get_K_W() 
{
	return K_W;
}

vector<int> conditions::get_c() 
{
	return c;
}
