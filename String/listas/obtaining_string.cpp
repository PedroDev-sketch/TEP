#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vector<int> ans;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == t[i]) continue;

        //debug
        //cout << s << '\n';

        int index = -1;
        for(int j = i + 1; j < n; j++)
        {
            if(s[j] == t[i])
            {
                index = j;
                break;
            }
        }

        if(index == -1) {cout << -1 << '\n'; return 0;}

        for(int j = index - 1; j >= i; j--)
        {
            swap(s[j], s[j+1]);
            ans.push_back(j+1);
        }
    }

    cout << ans.size() << '\n';
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << (i+1 == ans.size() ? "\n" : " ");
    }
    return 0;
}