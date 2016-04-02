// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int n;
	for (cin>>n; n>0; cin>>n)
		cout <<n*(n+1)*(2*n+1)/6 <<endl;
}
