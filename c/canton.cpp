// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int n;
	for (cin>>n; cin>>n;) {
		int m;
		for (m=1; m*(m+1)/2<n; ++m)
			;
		int k = n - m*(m-1)/2;
		if (m%2)
			k = m+1-k;
		cout <<"TERM "<<n<<" IS "<<k<<"/"<<m+1-k<<endl;
	}
}
