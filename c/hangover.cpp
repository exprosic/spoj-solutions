// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	vector<double> a;
	double sum = 0;
	for (int i=1; sum<5.2; ++i)
		a.push_back(sum += 1.0/(i+1));

	double n;
	for (cin>>n; n>0; cin>>n)
		cout <<upper_bound(a.begin(), a.end(), n)-a.begin()+1 <<" card(s)" <<endl;
}
