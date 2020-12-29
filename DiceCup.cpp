#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll a, b, minx, maxx;
    cin >> a >> b;
    if(a>b)
    {
        minx = b;
        maxx = a+1;
    }
    else
    {
        minx = a;
        maxx = b+1;
    }
    for(int i = minx; i < maxx; i++)
    {
        cout << i+1 << endl;
    }
        return 0;
}