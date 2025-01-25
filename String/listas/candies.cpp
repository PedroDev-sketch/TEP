#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define int ll
#define x first 
#define y second 

signed main()
{   
    int n, k, ans = 0;
    cin >> n >> k;

    vector<int> query(n);
    map<int,int> hist;
    for(auto& x : query)
    {
        cin >> x;
    }

    for(int i = 0; i < k; i++)
    {
        hist[query[i]]++;
    }

    ans = hist.size();
    for(int i = k; i < n; i++)
    {
        hist[query[i - k]]--;
        hist[query[i]]++;

        if(hist[query[i-k]] == 0) hist.erase(query[i-k]);
        ans = max(ans, (int) hist.size());
    }

    cout << ans << '\n';

    return 0;
}