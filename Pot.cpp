#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    int n; cin >> n;
    ll t = 0;
    for(int i = 0; i<n;i++)
    {
    	ll x; cin >> x;
    	ll temp;
    	temp = x%10;
    	x /=10;
    	t+=pow(x, temp);
	}
	cout << t << endl;
    return 0;
}