#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int p;  cin >> p;
    for(int i = 0; i < p; i++)
    {
        int k, n, dem = 0;
        cin >> k >> n;
        for(int j = 1; j <= n; j++)
        {
            dem +=j;
        }
        cout << k << " " << dem + n << endl;
    }

    return 0;
}