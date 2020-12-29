#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n; cin >> n;
    int dem = 0;
    float t = 0;
    for(int i = 0; i < n; i++)
    {
        float k; cin >> k;
        if(k < 0)
            continue;
        else
        {
            t+=k;
            dem++;
        }
    }
    cout << t/dem << endl;
    return 0;
}