// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	for (cin>>n; n>0; cin>>n) {
		vector<int> a(n), r(n);
		for (int i=0; i<n; ++i) {
			cin >>a[i];
			--a[i];
			r[a[i]] = i;
		}

		cout <<(equal(a.begin(), a.end(), r.begin()) ?"ambiguous" :"not ambiguous") <<endl;
	}
}
