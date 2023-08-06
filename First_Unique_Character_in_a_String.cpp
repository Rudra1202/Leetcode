#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    int firstUniqChar(string s)
    {
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;
        for (int i = 0; i < s.length(); i++)
            if(m[s[i]]==1) return i;        
        return -1; 
    }    
};
int32_t main()
{
    Solution s;
    cout << s.firstUniqChar("leetcode");
    return 0;
}