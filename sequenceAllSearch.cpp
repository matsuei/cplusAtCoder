#include <bits/stdc++.h>
using namespace std;

int func(vector<int> v) {
	vector<int> a(v.size());
	for(int i = 0; i < v.size(); i++) a.at(i) = i+1;
	int ans = 1;
	do {
		bool flg = true;
		for(int i = 0; i < v.size(); i++) {
			if(a.at(i) != v.at(i)) flg = false;
		}
		if(flg) return ans;
		ans++;
	} while(next_permutation(a.begin(), a.end()));
	return 0;
}

int main() {
	int N; cin >> N;
	vector<int> P(N), Q(N);
	for(int i = 0; i < N; i++) cin >> P.at(i);
	for(int i = 0; i < N; i++) cin >> Q.at(i);
	cout << abs(func(P)-func(Q)) << endl;
}
