#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    int T, numStore, min, max, temp;

    cin >> T;

    for(int i = 0; i < T; i++)
    {
        min = 99; max = 0;
        cin >> numStore;

        for (int i = 0; i < numStore; ++i)
        {
            cin >> temp;

            if (temp < min)
                min = temp;
            if (temp > max)
                max = temp;
        }

        cout << (max - min)*2 <<endl;
    }
}
