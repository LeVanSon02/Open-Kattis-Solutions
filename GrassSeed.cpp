#include <bits/stdc++.h>
using namespace std;

int main()
{
	double c, L;
	double kq = 0.0;
	cin >> c >> L;
	for(int i = 0; i< L;i++)
	{
		double w, l;
		cin >> w >> l;
		kq += w*l; 
	}
	cout << setprecision(6) << fixed <<kq*c<<endl; 
    return 0;
}