// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	while (cin>>a>>b>>c, a!=b) {
		if (b-a==c-b)
			cout <<"AP " <<c-b+c <<endl;
		else
			cout <<"GP " <<c/b*c <<endl;
	}
}
