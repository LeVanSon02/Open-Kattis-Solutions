#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ll n, dem = 0;
	vector<char> s;
	cin >> n;
	for(int i = 0; i<n;i++)
	{
		char a;
		cin >> a;
		s.push_back(a);
	}
	for(int i = 0; i< n; i++)
	{
		if(s[i] == s[i+1])
		{
			dem++;
		}	
	}
	cout << dem << endl;
    return 0;
}