#include "Conditions.h"
#include <fstream>
#include <iostream>

using namespace std;

Conditions::Conditions() {
	ifstream in("input.txt");
	int n;



	this -> v = v;
	this -> w = w;
	this -> K = K;
}

/*bool Conditions::is_good(Knapsack& knapsack) {
	int sum = 0;
	for (int i = 0; i < m_v.size(); i++) {
		sum += knapsack[i]*m_v[i];
	}
	return (sum < m_K);

}*/
