// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <cstdint>
using namespace std;

int main() {
	int64_t n;
	for (cin>>n; cin>>n;) {
		int64_t m = n/2;
		cout <<n*(n+1)*(n+1)/2 - n*(n+1)*(2*n+1)/6 + m*(m+1)*(n-1) - 2*m*(m+1)*(2*m+1)/3 + m*(m+1)*3/2 <<endl;
	}
}
