// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int a[10][4];

int main() {
	for (int i=0; i<10; ++i)
		for (int j=1; j<=4; ++j)
			a[i][j%4] = j==1 ? i : a[i][j-1]*i%10;
	int n;
	for (cin>>n; n--;) {
		int n, k;
		cin >>n >>k;
		cout <<(k==0?1:a[n%10][k%4]) <<endl;
	}
}
