// vim: set noet ts=4 sw=4 fileencoding=utf-8:
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

struct bigint {
	int a[109], w;

	bigint() {
		w = 0;
		memset(a, 0, sizeof(a));
	}

	friend istream &operator >>(istream &in, bigint &x) {
		string s;
		cin >>s;
		x.w = s.length();
		for (int i=0; i<x.w; ++i)
			x.a[i] = s[x.w-1-i] - '0';
		while (x.w>0 && x.a[x.w-1]==0)
			--x.w;
		return in;
	}

	friend ostream &operator <<(ostream &out, const bigint &x) {
		for (int i=x.w-1; i>=0; --i)
			out <<static_cast<char>('0'+x.a[i]);
		if (x.w==0)
			out <<'0';
		return out;
	}

	bigint operator +(const bigint &B) const {
		bigint res(*this);
		res.w = max(res.w, B.w);
		for (int i=0; i<res.w; ++i) {
			res.a[i] += B.a[i];
			res.a[i+1] += res.a[i]/10;
			res.a[i] %= 10;
		}
		res.w += res.a[res.w]>0;
		return res;
	}

	bigint operator -(const bigint &B) const {
		bigint res(*this);
		for (int i=0; i<w; ++i) {
			res.a[i] -= B.a[i];
			res.a[i+1] += (res.a[i]-9)/10;
			(res.a[i]+=10) %= 10;
		}
		while (res.w>0 && res.a[res.w-1]==0)
			--res.w;
		return res;
	}

	bigint operator /(const int k) const {
		bigint res(*this);
		int c = 0;
		for (int i=w-1; i>=0; --i) {
			c = c*10+res.a[i];
			res.a[i] = c/k;
			c %= k;
		}
		while (res.w>0 && res.a[res.w-1]==0)
			--res.w;
		return res;
	}
};

int main() {
	for (int n=0; n<10; ++n) {
		bigint a, b;
		cin >>a >>b;
		cout <<(a+b)/2 <<endl <<(a-b)/2 <<endl;
	}
}
