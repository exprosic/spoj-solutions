// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <cstdint>
using namespace std;

int main() {
	int n;
	for (cin>>n; cin>>n;) {
		int rem = 0;
		for (int i=0; i<n; ++i) {
			int64_t k;
			cin >>k;
			rem = (rem+k%n)%n;
		}
		cout << (rem==0 ? "YES" : "NO") <<endl;
	}
}
