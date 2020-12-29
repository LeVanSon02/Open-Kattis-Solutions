#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    int n; cin >> n;
    double t = 0;
    for(int i = 0; i < n; i++)
    {
    	double q, y;
    	cin >> q >> y;
    	t+=q*y;
	}
    
	cout << setprecision(6) << t << endl;
    return 0;
}