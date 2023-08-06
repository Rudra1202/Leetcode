#include<bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        set<int>s;
        for (int i = 0; i < nums.size(); i++)
            s.insert(nums[i]);
        for (int i = 1; i < nums.size(); i++)
            if(s.find(i)==s.end())v.push_back(i);
        return v; 
    }
};

int32_t main(){
    
    return 0;
}