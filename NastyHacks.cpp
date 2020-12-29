#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    int n; cin >> n;
    
    for(int i = 0; i<n;i++)
    {
    	ll r, e, c;
    	cin >> r >> e >> c;
    	if(e-c>r)
    		cout << "advertise" << endl;
		if(e-c == r)
			cout << "does not matter" << endl;
		if(e-c<r)
			cout << "do not advertise" << endl;
	}
    return 0;
}