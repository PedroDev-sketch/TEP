#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, p, count = 0;
    string s;
    cin >> n >> p >> s;

    if(p > n/2)
    {
        reverse(s.begin(),s.end());
        p = n - p + 1;
    }

    int l, r;
    for(int i = 0; i <= p; i++)
    {
        
    }

    return 0;
}