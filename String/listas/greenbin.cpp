#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define int ll

signed main()
{
    int n, total = 0;
    string in;
    map<string,int> hist;

    cin >> n;
    
    vector<string> history(n);
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        sort(in.begin(),in.end());
        history[i] = in;
    }

    for(int i = 0; i < n; i++)
    {
        hist[history[i]]++;
    }

    for(auto it = hist.begin(); it != hist.end(); it++)
    {
        int m = it -> second;
        total += (m*(m-1))/2;
    }

    cout << total << '\n';

    return 0;
}