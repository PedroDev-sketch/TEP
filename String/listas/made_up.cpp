#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int ll

signed main()
{
    cin.tie(0) -> ios::sync_with_stdio(0);
    int n, ans = 0;
    cin >> n;
    vector<int> a(n), b(n), c(n), match(n,0);
    for(auto& x : a) {cin >> x;x--;}for(auto& x : b) {cin >> x;x--;}for(auto& x : c) {cin >> x;x--;}
    for(int j = 0; j < n; j++)
    {
        match[b[c[j]]]++;
    }
    for(int i = 0; i < n; i++)
    {
        ans += match[a[i]];
    }
    cout << ans << '\n';
    return 0;
}