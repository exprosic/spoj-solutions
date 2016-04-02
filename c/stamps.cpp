// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	int ncases;
	cin >>ncases;
	for (int icase=1; icase<=ncases; ++icase) {
		int m, n;
		cin >>m >>n;
		vector<int> a(n);
		for (int &ai: a)
			cin >>ai;
		sort(a.begin(), a.end(), greater<int>());
		int i;
		for (i=0; m>0 && i<n; ++i)
			m -= a[i];

		cout <<"Scenario #"<<icase<<":\n";
		if (m > 0)
			cout <<"impossible";
		else
			cout <<i;
		cout <<"\n\n";
	}
}
