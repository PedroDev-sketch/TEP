#include <bits/stdc++.h>
using namespace std;

signed main()
{   
    string s, r;
    cin >> s;
    cin >> r;

    reverse(s.begin(), s.end());
    if(s == r) cout << "YES";
    else cout << "NO";
    cout << '\n';

    return 0;
}