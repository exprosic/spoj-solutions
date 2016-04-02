// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >>n;
	int ans = 0;
	for (int i=1; i<=n; ++i)
		for (int j=1; j*j<=i; ++j)
			ans += i%j==0;
	cout <<ans <<endl;
}
