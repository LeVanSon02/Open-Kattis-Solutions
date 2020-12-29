#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> ns;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        ns.push_back(x);
    }
    reverse(ns.begin(), ns.end());
    for(int i = 0; i < ns.size(); i++)
    {
        cout << ns[i] << endl;
    }
    return 0;
}
