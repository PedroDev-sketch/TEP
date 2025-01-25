#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    int k, count = 0;
    cin >> s >> k;
    sort(s.begin(),s.end());

    do
    {
        count++;
        if(count >= k) break;
    }while(next_permutation(s.begin(),s.end()));

    cout << s << '\n';
}