// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n;
	for (cin>>n; cin>>n;) {
		vector<int> a(n), b(n);
		for (int &ai: a)
			cin >>ai;
		for (int &bi: b)
			cin >>bi;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int sum = 0;
		for (int i=0; i<a.size(); ++i)
			sum += a[i]*b[i];
		cout <<sum <<endl;
	}
}
