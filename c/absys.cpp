// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	for (cin>>n; n--;) {
		string a, b, c;
		cin >>a >>b >>b >>c >>c;
		int da=stoi("0"+a), db=stoi("0"+b), dc=stoi("0"+c);
		if (a!=to_string(da))
			da = dc-db;
		else if (b != to_string(db))
			db = dc-da;
		else
			dc = da+db;

		cout <<da <<" + " <<db <<" = " <<dc <<endl;
	}
}
