// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >>n;
	while (n--) {
		string sa, sb;
		cin >>sa >>sb;
		reverse(sa.begin(), sa.end());
		reverse(sb.begin(), sb.end());
		string sc = to_string(stoi(sa)+stoi(sb));
		reverse(sc.begin(), sc.end());
		sc.erase(0, sc.find_first_not_of("0"));
		cout <<sc <<endl;
	}
}
