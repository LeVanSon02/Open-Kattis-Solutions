#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
    	int x; cin >> x;
    	if(abs(x)%2==0)
    	{
    		cout << x << " is even" << endl;
		}
		else
			cout << x << " is odd" << endl;
	}
    return 0;
}