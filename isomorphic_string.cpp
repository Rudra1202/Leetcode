#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;
        unordered_map<char, char> m1;
        unordered_map<char, char> m2;
        for (int i = 0; i < s.length(); i++)
        {
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        bool flag = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (m1[s[i]] == t[i] && s[i] == m2[t[i]])
                flag = true;
            else break;
        }

        return flag;
    }
};
int32_t main()
{
    string a = "afd", b = "egg";
    Solution s;
    cout << s.isIsomorphic(a, b) << endl;
    return 0;
}