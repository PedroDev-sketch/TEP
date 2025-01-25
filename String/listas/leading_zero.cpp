#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string& s)
{
    bool ans = true;
    int len = s.length();
    for(int i = 0; i < len; i++)
    {
        if(s[i] != s[len - (1 + i)]) ans = false;
    }

    return ans;
}

signed main()
{
    string s;
    bool ans = true;
    cin >> s;

    if(s.back() != '0') ans = false;
    while(s.back() == '0') s.pop_back();
    ans = isPalindrome(s);


    if(ans) cout << "Yes";
    else cout << "No";
    cout << '\n';

    return 0;
}