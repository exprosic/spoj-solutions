// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main() {
	int m, n;
	for (cin>>m; cin>>m>>n;) {
		priority_queue<int, vector<int>, greater<int>> mq, nq;
		for (int i=0; i<m; ++i) {
			int k;
			cin >>k;
			mq.push(k);
		}
		for (int i=0; i<n; ++i) {
			int k;
			cin >>k;
			nq.push(k);
		}

		while (!mq.empty() && !nq.empty()) {
			auto &q = mq.top()<nq.top() ?mq :nq;
			q.pop();
		}

		cout <<(mq.empty() ?"MechaGodzilla" :"Godzilla") <<endl;
	}
}
