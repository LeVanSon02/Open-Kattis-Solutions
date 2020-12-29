#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main()
{
    int w, h, v, maxh, maxv;
    cin >> w >> h >> v;
    if(h < w - h)
    	maxh = w-h;
    else
    	maxh = h;
    if(v < w - v)
    	maxv = w-v;
    else
		maxv = v;
    cout << 4*maxh*maxv << endl;
    return 0;
}