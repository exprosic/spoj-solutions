// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <set>
#include <cstdint>
using namespace std;

int main() {
	int64_t n;
	cin >>n;
	n >>= __builtin_ctzll(n);
	set<int64_t> m;
	while (n > 1) {
		if (m.count(n) > 0) {
			cout <<"NIE" <<endl;
			return 0;
		}
		m.emplace(n);
		if (n&1 == 0)
			n >>= __builtin_ctzll(n);
		else {
			++n;
			n >>= __builtin_ctzll(n);
			n *= 3;
		}
	}

	cout <<"TAK" <<endl;
	return 0;
}
