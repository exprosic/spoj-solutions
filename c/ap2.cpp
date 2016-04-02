// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <cstdint>
using namespace std;

int main() {
	int64_t l, r, s;
	for (cin>>l; cin>>l>>r>>s;) {
		int64_t n = s*2/(l+r);
		int64_t d = (s-l*n)*2/n/(n-5);
		cout <<n <<endl;
		for (int i=0; i<n; ++i)
			cout <<l+(i-2)*d <<(i==n-1?'\n':' ');
	}
}
