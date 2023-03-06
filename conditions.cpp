Conditions::Conditions(const vector<int> & v, const vector<int> & w, int K) {
	m_v = v;
	m_w = w;
	m_k = K;
}

bool Conditions::is_good(Knapsack& knapsack) {
	int sum = 0;
	for (int i = 0; i < m_v.size(); i++) {
		sum += knapsack[i]*m_v[i];
	}
	return (sum < m_K);

}
