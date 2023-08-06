#include <bits/stdc++.h>
using namespace std;
#define int long long

string longestCommonPrefix(vector<string> &v)
{
    string s, s1, s2;
    vector<string> a;
    a.push_back(v[0]);
    for (int i = 1; i < v.size(); i++)
    {
        s1 = a[i - 1];
        s2 = v[i];
        for (int i = 0; i < s2.length(); i++)
        {
            if (s1[i] == s2[i])
            {
                s += s1[i];
            }
            else {
                break;
            }
        }
        a.push_back(s);
        s.clear();
    }
    return a[a.size() - 1];
}
int32_t main()
{
    vector<string> s = {"cir", "car"};
    cout << longestCommonPrefix(s);
    return 0;
}