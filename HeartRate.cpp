#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        double b, p;
        cin >> b >> p;
        double kq = 60.0*(b/p);
        double t = 60.0/p;
        cout << fixed;
        cout.precision(4);
        cout << kq - t << " " << kq << " " << kq+t << endl;
    }
    return 0;
}