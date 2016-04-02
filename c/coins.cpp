// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <cstdint>
using namespace std;

constexpr int MAX_N = 1000000;

int64_t a[MAX_N+9];

int64_t calc(int k) {
	if (k<=MAX_N)
		return a[k];
	else
		return max(0LL+k, calc(k/2)+calc(k/3)+calc(k/4));
}

int main() {
	for (int i=1; i<=MAX_N; ++i)
		a[i] = max(0LL+i, a[i/2]+a[i/3]+a[i/4]);
	int n;
	while (cin>>n)
		cout << calc(n) <<endl;
}
