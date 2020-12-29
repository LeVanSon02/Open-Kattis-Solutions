#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    ll x, n, p = 0;
    cin >> x >> n;
    
    
    for(int i = 0; i < n; i++)
    {
    	ll used;
    	cin >> used;
    	p+=used;
	}
	cout << x*(n+1) - p << endl;
    return 0;
}