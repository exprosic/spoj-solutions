// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	string n;
	for (cin>>n; cin>>n;) {
		string left(n.begin(), n.begin()+n.length()/2);
		string left1(n.begin(), n.end()-n.length()/2);
		string rleft(n.rend()-n.length()/2, n.rend());
		string right(n.end()-n.length()/2, n.end());
		if (rleft > right) {
			cout <<left1 <<rleft <<endl;
		} else {
			size_t p = left1.find_last_not_of("9");
			if (p == string::npos) {
				cout <<1 <<string(n.length()-1, '0') <<1 <<endl;
				continue;
			}
			++left1[p];
			fill(left1.begin()+p+1, left1.end(), '0');
			right = string(left1.rend()-n.length()/2, left1.rend());
			cout <<left1 <<right <<endl;
		}
	}
}
