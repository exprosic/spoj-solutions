// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <iomanip>
using namespace std;

constexpr double M_PI = 3.14159265358979323846;

int main() {
	double n;
	for (cin>>n; n>0; cin>>n)
		cout <<fixed <<setprecision(2) <<n*n/2/M_PI <<endl;
}
