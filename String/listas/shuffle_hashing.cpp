#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        map<char, int> histor, histch;
        string origin, changed, ans;
        cin >> origin;
        cin >> changed;

        int sizeor = origin.size(), sizech = changed.size();
        if(sizech < sizeor) ans ="NO";
        else if(sizeor == sizech)
        {
            for(auto x : origin)
            {
                histor[x]++;
            }
            for(auto x : changed)
            {
                histch[x]++;
            }
            if(histor == histch) ans = "YES";
            else ans = "NO";
        }
        else
        {
            for(auto x : origin)
            {
                histor[x]++;
            }

            for(int i = 0; i < sizeor; i++)
            {
                histch[changed[i]]++;
            }
            if(histch == histor) ans = "YES";

            else
            {
                ans = "NO";
                for(int i = sizeor; i < sizech; i++)
                {
                    histch[changed[i]]++;
                    histch[changed[i-sizeor]]--;
                    if(histch[changed[i-sizeor]] == 0) histch.erase(changed[i-sizeor]);

                    if(histch == histor){ans = "YES";break;}
                }
            }
        }

        cout << ans << '\n';
    }
}