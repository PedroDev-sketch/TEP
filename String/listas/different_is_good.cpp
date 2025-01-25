#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n, ans=0;
    cin >> n;
    string s;
    cin >> s;

    //map<char, int> hist;
    set<char> diff;
    for(auto x : s)
    {
        diff.insert(x);
    }

    if(n > 26)
    {
        ans = -1;
    }
    else
    {
        ans = n - diff.size();
    }

    cout << ans << '\n';
}