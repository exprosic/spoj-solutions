// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <string>
using namespace std;

const char *trans(const char *p) {
	if (isalpha(*p)) {
		cout <<*p;
		return p+1;
	}
	p = trans(p+1);
	char c = *p;
	p = trans(p+1);
	cout <<c;
	return p+1;
}

int main() {
	int n;
	cin >>n;
	while (n--) {
		char expr[409];
		cin >>expr;
		trans(expr);
		cout <<endl;
	}
}
