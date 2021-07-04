#include<iostream>
#include<vector>
using namespace std;
int n, m;
vector<int>max_m;
int max_x(vector<int> &p, int id_a, int id_b) {
	int size = p.size();
	int max = -99999;
	for (int i = id_a ; i < id_b; i++) {
		if (p[i] >= max)
			max = p[i];
	}
	return max;
}

int query_U(vector<int> &p,int id_a,int id_b) {
	int max = max_x(p, id_a-1, id_b-1);
	max_m.push_back(max);
	//cout << max << endl;
	return max;
}
int Upadate_U(vector<int> &p, int id_a, int id_b) {
	p[id_a-1] = id_b;
	int max = max_x(p, 0, m);
	//cout<< max;
	return max;
}
int main() {
	cin >> n >> m;
	//cout << n << m;
	vector<int> p;
	for (int i = 1; i <= n; i++) {
		int num;
		cin >> num;
		p.push_back(num);
	}
	for (int i = 0; i < m; i++) {
		int id_a, id_b;
		char c;
		cin >> c >> id_a >> id_b;
		if (c == 'Q') {
			if (id_a < id_b) {
				query_U(p, id_a, id_b);
			}
		}
		if (c == 'U')
			Upadate_U(p, id_a, id_b);
	}
	for(int i = 0;i < max_m.size()-1;i++){
		cout << max_m[i];
	}
	cout << max_m[max_m.size() - 1];
}