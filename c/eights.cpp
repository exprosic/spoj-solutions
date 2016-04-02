// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <iomanip>
using namespace std;

int a[100], m;

int main() {
	int m = 0;
	for (int i=0; i<1000; ++i)
		if (i*i*i%1000 == 888)
			a[m++] = i;

	int64_t n;
	cin >>n;
	while (cin>>n) {
		--n;
		if (n<m)
			cout <<a[n] <<endl;
		else
			cout <<n/m <<setfill('0') <<setw(2) <<a[n%m] <<endl;
	}
}
