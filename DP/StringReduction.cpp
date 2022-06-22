#include <bits/stdc++.h>
using namespace std;

int stringReduction(string s) {
    // vector<string>v (s.length());
    vector<int>v (3, 0);

    for (int i = 0 ; i<s.length(); i++)
        v[int(s[i])-97]++;

    int a = v[0];
    int b = v[1];
    int c = v[2];

    if ((a&1 && b&1 && c&1) || (!(a&1) && !(b&1) && !(c&1))) return 2;
    else if (a == s.length() || b == s.length() || c == s.length()) return s.length();
    else return 1;
}


int main()
{
    string s = "bcab";
    cout<< stringReduction(s);

    return 0;
}