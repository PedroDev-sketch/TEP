#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>hist;

    for(auto x : s)
    {
        if(x < 'a'){x -= 'A'; x += 'a';}
        hist[x]++;
    }

    string ans;
    if(hist.size() >= 26) ans = "YES";
    else ans = "NO";

    cout << ans << '\n';
}