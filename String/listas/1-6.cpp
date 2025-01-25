#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    cin.ignore();
    while(getline(cin, s), s != "*")
    {
        bool check = true;
        for(auto& x : s)
        {
            if(x >= 'A' && x <= 'Z')
            {
                x-='A';x+='a';
            }
        }

        char taut;
        for(auto x : s)
        {
            if(x >= 'a' && x <= 'z') {taut = x; break;}
        }

        for(int i = 1; i < s.length(); i++)
        {
            if(s[i] == ' ' && (s[i+1] != taut && i+1 < s.length()))
            {
                check = false;
                break;
            }
        }
        if(check) cout << 'Y' << '\n';
        else cout << 'N' << '\n';
    }

    return 0;
}