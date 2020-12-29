#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dem = 0;
    vector<char> s;
    string ss;
    cin >> ss;
    for(int i = 0; i<ss.length(); i++)
    {
        s.push_back(ss[i]);
    }
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == s[i+1]&& s[i] == 's')
        {
            dem++;
        }
    }
    if(dem>0)
    {
        cout << "hiss" << endl;
    }
    else
    {
        cout << "no hiss"<<endl;
    }
    return 0;
}