#include <bits/stdc++.h>
using namespace std;

#define x first 
#define y second 

signed main()
{
    cin.tie(0) -> ios::sync_with_stdio(0);

    string s;
    cin >> s;

    map<char, int> hist;
    for(auto p : s)
    {
        hist[p]++;
    }

    int odd=0;
    set<char> odds;
    for(auto p : hist)
    {
        if(p.y %2) {odd++;odds.insert(p.x);}
    }

    for(auto it = odds.begin(); it != odds.end();)
    {
        if(odd == 0 || odd == 1) break;

        auto last = --odds.end();
        hist[*last]--;
        hist[*it]++;

        if(hist[*last] <= 0) hist.erase(*last);
        odds.erase(last);
        odd-=2;

        it++;
    }

    stack<char> ans;
    char carry = '1';
    for(auto it = hist.begin(); it != hist.end(); it++)
    {
        int num = (it->y)/2;
        if(it->y%2)
        { 
            carry = it->x;
        }

        for(int i = 0; i < num; i++)
        {
            cout << it->x;
            ans.push(it->x);
        }
    }
    if(carry != '1')
    {
        cout << carry;
    }
    while(!ans.empty())
    {
        cout << ans.top();
        ans.pop();
    }
    cout << '\n';

    return 0;
}