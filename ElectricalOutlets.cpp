#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int k, o = 0;
        cin >> k;
        for(int j = 0; j<k; j++)
        {
            int ok;
            cin >> ok;
            o += ok-1;
        }
        cout << o + 1 << endl;
    }
    return 0;
}