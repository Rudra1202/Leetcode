#include<bits/stdc++.h>
using namespace std;
#define int long long
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t)return true;
        else false;
    }
};
int32_t main(){
    
    return 0;
}