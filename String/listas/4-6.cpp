#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, comp;
    vector<int> arr;
    
    cin >> n;
    string ans, sn = to_string(n);
    for(auto x : sn) arr.push_back(x - '0');

    char letter1, letter5, letter10;
    int size = arr.size();
    for(int i = 0; i < size; i++)
    {
        if(size - i == 3)
        {
            letter1 = 'C';
            letter5 = 'D';
            letter10 = 'M';
        }
        else if(size - i == 2)
        {
            letter1 = 'X';
            letter5 = 'L';
            letter10 = 'C';
        }
        else if(size - i == 1)
        {
            letter1 = 'I';
            letter5 = 'V';
            letter10 = 'X';
        }

        if(arr[i] == 9) 
        {
            ans.push_back(letter1);
            ans.push_back(letter10);
        }
        else if(arr[i] >= 5)
        {
            comp = arr[i] - 5;
            ans.push_back(letter5);
            for(int i = 0; i < comp; i++) ans.push_back(letter1);
        }
        else if(arr[i] == 4)
        {
            ans.push_back(letter1);
            ans.push_back(letter5);
        }
        else
        {
            comp = arr[i];
            for(int i = 0; i < comp; i++) ans.push_back(letter1);
        }
    }

    cout << ans << '\n';
    
    return 0;
}