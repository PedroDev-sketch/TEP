#include <bits/stdc++.h>
using namespace std;

signed main()
    {int n, casenum = 0;while(cin >> n, n){casenum++;cin.ignore();vector<string> input(n);vector<char> temp;for(int i = 0; i < n; i++) {getline(cin, input[i]);}
    for(int i = 0; i < n; i++) {bool flag = false; for(auto x : input[i]) {if(x == '\"' || x == '\\'){temp.push_back('\\');flag = true;} temp.push_back(x);} if(flag){input[i].clear(); for(int j = 0; j < temp.size(); j++){input[i].push_back(temp[j]);}} temp.clear();}
    cout << "Case " << casenum << ":" << '\n';cout << "#include<string.h>" << '\n' << "#include<stdio.h>" << '\n' << "int main()" << '\n' << "{" << '\n';
    for(int i = 0; i < n; i++){cout << "printf(\"" << input[i] << "\\n\");" << '\n';}cout << "printf(\"\\n\");" << '\n' << "return 0;" << '\n' << "}" << '\n';}return 0;}