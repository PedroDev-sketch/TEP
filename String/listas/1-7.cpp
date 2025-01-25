#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define x first 
#define y second 
#define int ll

string formFibonacci(pair<string, string>& fib, int num)
{
    int point = 1;
    string ans;
    while(point <= num)
    {
        if(point == 1) {fib.x = "a"; ans = fib.x;}
        else if(point == 2) {fib.y = "b"; ans = fib.y;}
        else
        {
            ans = fib.y + fib.x;
            fib.x = fib.y;
            fib.y = ans;
        }
        point++;
    }
    return ans;
}

signed main()
{
    cin.tie(nullptr) -> ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    pair<string, string> fib;
    string fibonacci = formFibonacci(fib, n);

    map<string, int> passed;

    int count;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin >> s;

        if(passed.count(s)) cout << passed[s] << '\n';
        else
        {
            count = 0;
            size_t pos = 0;
            while((pos = fibonacci.find(s, pos)) != string::npos)
            {
                count++;
                pos++;
            }

            passed[s] = count;

            cout << (count % (ll)(1e9 + 7)) << '\n';
        }
    } 
    return 0;
}