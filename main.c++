#include <bits/stdc++.h>
using namespace std;
#define ll long long
void fast() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
}
 bool pland(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - 1 - i])return 0;
	}
	return 1;
}

ll GCD(ll a, ll b) {
	return a == 0 ? b : GCD(b % a, a);
}

ll LCM(ll a, ll b)
{
    return (a*b) / GCD(a,b);
}

void solve()
{
   
}
int main() {
    fast();
	int t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}