#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mxN=1e5;
int a[mxN], t[mxN], n, q;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> q;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	for(int i=0; i<q; ++i)
		cin >> t[i];
	int mx=*max_element(a, a+n);
	int mn=*min_element(a, a+n);
	for(int i=0; i<q; ++i) {
		if(t[i]>=mn&&t[i]<=mx)
			cout << "Yes";
		else
			cout << "No";
		cout << "\n";
	}
}
