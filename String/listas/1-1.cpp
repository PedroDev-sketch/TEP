#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    string p;
    bool ans = false;
    cin >> p;
    for(int i = 0; i < p.length(); i++)
    {
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
        {
            ans = true;
            break;
        }
    }

    if(ans) cout << "YES" << '\n';
    else cout << "NO" << '\n';

    return 0;
}