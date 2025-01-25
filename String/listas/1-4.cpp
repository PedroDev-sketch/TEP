#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string s;
    while(cin >> s, s != "0")
    {
        vector<int> hist;
        int count = 0;

        
        cout << "Original number was " << s << '\n';
        while(true)
        {
            string asc = s;
            sort(asc.begin(), asc.end());
            string desc = asc;
            reverse(desc.begin(), desc.end());

            count++;
            int numasc = stoi(asc);
            int numdesc = stoi(desc);
            int newnum = numdesc - numasc;
            
            cout << numdesc << " - " << numasc << " = " << newnum << '\n';

            auto it = find(hist.begin(), hist.end(), newnum);
            if(it != hist.end())break;
            else
            {
                hist.push_back(newnum);
                s = to_string(newnum);
            } 
        }
        cout << "Chain length " << count << '\n' << '\n';
    }

    return 0;
}