#include<bits/stdc++.h>
using namespace std;
#define int long long
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length()%2!=0)return false;
        map<char,int>m;
        string sample = "";
        for (int i = 0; i < s.length(); i++)
        {
            if(m[s[i]]>0) break;
            else m[s[i]]++,sample.push_back(s[i]);
        }
        int a = sample.length()-1;
        int b=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(b>a) b=0;
            if(s[i]!=sample[b])return false;
            b++;
        }
        if(b!=sample.length())return false;
        return true;
    }
    
};
int32_t main(){
    
    return 0;
}