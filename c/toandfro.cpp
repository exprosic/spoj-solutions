// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	for (cin>>n; n>0; cin>>n) {
		string s;
		cin >>s;
		for (auto p=s.begin(); p!=s.end() && p+n!=s.end(); p+=n*2)
			reverse(p+n, p+n*2);
		for (int i=0; i<n; ++i)
			for (int j=i; j<s.length(); j+=n)
				cout <<s[j];
		cout <<endl;
	}
}
