#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll reverses(ll n)
{
	ll f, s, t;
	f = n%10;
	s = (n/10)%10;
	t = n/100;
	return f*100+s*10+t;
}
int main()
{
	ll a, b; cin >> a >> b;
	cout << (reverses(a) > reverses(b)?reverses(a):reverses(b));
    return 0;
}