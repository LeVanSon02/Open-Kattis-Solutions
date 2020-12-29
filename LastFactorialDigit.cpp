#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
void gt(int n)
{
    int x=1;
    for(int i = 1; i <= n; i++)
    {
        x*=i;
    }
    x = x%10;
    cout << x << endl;
}
int main()
{
    ll a;
    cin >> a;
    for(int i = 0; i < a; i++)
    {
        ll n; cin >> n;
        gt(n);
    }
    return 0;
}
