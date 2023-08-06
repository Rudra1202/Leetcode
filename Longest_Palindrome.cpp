#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    int longestPalindrome(string s)
    {
        unordered_map<char,int>m;
        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;
        int count_one = 0;
        int ans = 0;
        for(auto it:m){
            if(it.second%2==0) ans+=it.second;
            else {
                count_one++;
                ans += it.second - 1;
            }
        }
        if(count_one>0) ans+1;
        return ans ;
    }
};

int32_t main()
{

    return 0;
}