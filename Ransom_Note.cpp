#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> m1,m2;
        for (int i = 0; i < ransomNote.length(); i++) m1[ransomNote[i]]++;
        for (int i = 0; i < magazine.length(); i++) m2[magazine[i]]++;
        for(auto it:m1) if(m2[it.first] != it.second) return false;
        return true;
    }
};
int32_t main()
{
    Solution s;
    cout<<s.canConstruct("aa","ab");
    return 0;
}