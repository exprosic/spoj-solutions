// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int n;
	for (cin>>n; n--;) {
		int x, y, v;
		cin >>x >>y;
		if (x-y==0)
			cout <<y*2 - x%2 <<endl;
		else if (x-y==2)
			cout <<y*2+2-x%2 <<endl;
		else
			cout <<"No Number" <<endl;
	}
}
