// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int a[10009];

int main() {
	int n;
	for (cin>>n; n>0; cin>>n) {
		int sum = 0;
		for (int i=0; i<n; ++i) {
			cin >>a[i];
			sum += a[i];
		}
		if (sum%n>0) {
			cout <<-1 <<endl;
			continue;
		}
		int ave = sum/n;
		int ans = 0;
		for (int i=0; i<n; ++i)
			if (a[i] > ave)
				ans += a[i]-ave;
		cout <<ans <<endl;
	}
}
