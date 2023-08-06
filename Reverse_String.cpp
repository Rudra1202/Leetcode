#include<bits/stdc++.h>
using namespace std;
#define int long long
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int f=0,r=n-1;
        while(f<r){
            swap(s[f],s[r]);
            f++;
            r--;
            }
            
    }
};
int32_t main(){
    Solution s;
    vector<char> s1{'h','e','l','l','o'};
    s.reverseString(s1);
    return 0;
}