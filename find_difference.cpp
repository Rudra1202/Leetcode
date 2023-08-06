#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s1 = "", s2 = "y";
    unordered_map<char, int> m;
    for (int i = 0; i < s1.length(); i++)
    {
        m[s1[i]]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if (m[s2[i]] > 0)
        {
            m[s2[i]]--;
        }
        else
        {
            m[s2[i]]++;
        }
    }
    for (auto it : m)
    {
        if (it.second > 0)
            cout << it.first << " ";
    }

    return 0;
}