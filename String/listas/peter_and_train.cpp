#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string seq, one, two, ans;
    cin >> seq;
    cin >> one;
    cin >> two;

    string rseq = seq;
    reverse(rseq.begin(),rseq.end());

    /* auto sone = seq.find(one), stwo = seq.find(two);
    auto rone = rseq.find(one), rtwo = rseq.find(two); */

    /* if(((sone == string::npos || stwo == string::npos) && (rone == string::npos || rtwo == string::npos)) || (one.length()+two.length() > seq.length()))
    {
        ans = "fantasy";
    } */
    //else
    {
        int fi = seq.find(one), se = seq.find(two, fi+one.length());
        int rfi = rseq.find(one), rse = rseq.find(two, rfi+one.length());

        if((seq.find(one) == string::npos || seq.find(two) == string::npos) && (rseq.find(one) == string::npos || rseq.find(two) == string::npos))
        {
            //ans = "backward";
            ans = "fantasy";
        }
        /* else if(rseq.find(one) == string::npos)
        {
            ans = "forward";
        } */
        else 
        {
            int flag = 0;
            if(fi < se) 
            {
                ans = "forward";
                flag++;
            }
            if(rfi < rse) {ans = "backward"; flag++;}

            if(flag >= 2) ans = "both";

            //teste temp
            if(flag == 0) ans = "fantasy";
        }
    }

    cout << ans << '\n';

    return 0;
}