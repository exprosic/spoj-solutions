// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int a, b;
	for (cin>>a>>b; a>=0; cin>>a>>b) {
		if (a<b)
			swap(a,b);
		cout <<(a+b)/(b+1) <<endl;
	}
}
