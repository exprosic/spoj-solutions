// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >>n;
	while (n--) {
		int k;
		cin >>k;
		int ans = 0;
		do {
			k /= 5;
			ans += k;
		} while (k > 0);
		cout <<ans <<endl;
	}
}
