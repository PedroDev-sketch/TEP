#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    cin >> s;
    map<char,int> hist;
    char high = s[0];

    for(auto x : s)
    {
        hist[x]++;
        high = max(high, x);
    }

    for(int i = 0; i < hist[high]; i++)
    {
        cout << high;
    }
    cout << '\n';
}