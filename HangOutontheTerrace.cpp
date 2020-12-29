#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ll a, b;
	ll dem = 0, cur = 0;
	cin >> a >> b;
	for(ll i = 0; i < b; i++)
	{
		string s;
		ll x;
		cin >> s >> x;
		if(s == "enter")
		{
			if(cur+x > a)
			{
				dem++;
			}
			else
			{
				cur+=x;
			}
		}
		else
		{
			cur-=x;
		}
	}
	cout << dem << endl;
    return 0;
}