// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, m;
	cin >>n >>m;
	if (n != m+1) {
		cout <<"NO" <<endl;
		return 0;
	}

	vector<vector<int>> edge(n);
	while (m--) {
		int l, r;
		cin >>l >>r;
		--l;
		--r;
		edge[l].push_back(r);
		edge[r].push_back(l);
	}

	queue<int> q;
	vector<bool> vis(n);
	q.push(0);
	vis[0] = true;
	int cnt = 0;
	while (!q.empty()) {
		int k = q.front();
		q.pop();
		++cnt;
		for (int &v: edge[k])
			if (!vis[v]) {
				vis[v] = true;
				q.push(v);
			}
	}

	cout <<(cnt==n ?"YES" :"NO") <<endl;
}
