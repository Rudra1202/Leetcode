#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> v;
        vector<char> p;
        string insert = "";
        for (int i = 0; i < s.length(); i++)
        {
            while (s[i] != ' ' && i < s.length())
            {
                insert.push_back(s[i]);
                i++;
            }
            v.push_back(insert);
            insert = "";
        }
        for (int i = 0; i < pattern.length(); i++)
            p.push_back(pattern[i]);
        if(v.size()!=p.size())return false;
        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        for (int i = 0; i < p.size(); i++)
        {
            if(m1.find(p[i])!=m1.end()){
                if(m1[p[i]]!=v[i])return false;
            }
            else m1[p[i]] = v[i];
            if(m2.find(v[i])!=m2.end()){
                if(m2[v[i]]!=p[i])return false;
            }
            else m2[v[i]] = p[i];
        }
        return true;
    }
};
int32_t main()
{
    Solution s;
    string s1 = "abba";
    string n = "dog cat dog cat";
    cout << s.wordPattern(s1, n);
    return 0;
}