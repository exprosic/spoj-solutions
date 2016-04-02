// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <cstring>
using namespace std;

int a[209], w, c;

int main() {
	int ncases;
	cin >>ncases;
	while (ncases--) {
		int n;
		cin >>n;

		memset(a, 0, sizeof(a));
		a[0] = 1;
		w = 1;
		c = 0;
		for (int i=2; i<=n; ++i) {
			for (int j=0; j<w+2; ++j) {
				c += a[j]*i;
				a[j] = c%10;
				c /= 10;
			}
			for (w+=2; a[w-1]==0; --w)
				;
		}

		for (int j=w-1; j>=0; --j)
			cout <<a[j];
		cout <<endl;
	}
}
