// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <string>
#include <vector>
#include <cstdint>
using namespace std;

int main() {
	string n;
	for (cin>>n; n>"0"; cin>>n) {
		vector<int64_t> a(n.length()+1);
		a[0] = 1;
		for (int i=1; i<=n.length(); ++i)
			a[i] = (n[i-1]>'0'?a[i-1]:0) +
				(i>1 && n[i-2]>'0' && (n[i-2]-'0')*10+(n[i-1]-'0')<=26 ? a[i-2] : 0);
		cout <<a.back() <<endl;
	}
}
