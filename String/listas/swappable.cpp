#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int ll

signed main()
{
    int n, minus = 0;
    cin >> n;

    map<int,int> hist;
    int a, total = (n*(n-1))/2;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        hist[a]++;
    }

    for(auto x : hist)
    {
        if(x.second > 1) {minus += (x.second* (x.second - 1))/2;}
    }
    if(total >= minus) total -= minus;
    cout << total << '\n';

    return 0;
}