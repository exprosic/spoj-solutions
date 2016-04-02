// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >>n;
	if (n%10 == 0) {
		cout <<"2" <<endl;
	} else {
		cout <<"1\n" <<n%10 <<endl;
	}
}
