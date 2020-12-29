#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll n, dem = 0;
    ll a[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < 0){
            dem++;
        }
    }
    cout << dem << endl;
    return 0;
}
