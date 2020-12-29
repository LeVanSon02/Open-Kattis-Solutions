#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ll a, b;
    cin >> a >> b;
    if(a>0&&b>0)
        cout << "1" << endl;
    if(a<0&&b>0)
        cout << "2" << endl;
    if(a<0&&b<0)
        cout << "3" << endl;
    if(a>0&&b<0)
        cout << "4" << endl;
    return 0;
}
