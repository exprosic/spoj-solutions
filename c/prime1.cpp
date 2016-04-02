// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

bool isprime(int k) {
	for (int i=2; i*i<=k; ++i)
		if (k%i == 0)
			return false;
	return k>1;
}

int main() {
	int n;
	cin >>n;
	while (n--) {
		int l, r;
		cin >>l >>r;
		for (int i=l; i<=r; ++i)
			if (isprime(i))
				cout <<i <<endl;
		cout <<endl;
	}
}
