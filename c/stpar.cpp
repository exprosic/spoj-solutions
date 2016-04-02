// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
	int n;
	for (cin>>n; n>0; cin>>n) {
		vector<int> a(n);
		for (int &ai: a)
			cin >>ai;
		stack<int> s;
		int m = 0, k=1;
		for (int i=0; i<2*n; ++i)
			if (!s.empty() && s.top()==k) {
				s.pop();
				++k;
			} else if (m<n)
				s.push(a[m++]);
			else
				break;
		cout <<(s.empty() ?"yes" :"no") <<endl;
	}
}
