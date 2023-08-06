#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v1;
        vector<int>v2;
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > 0) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        int i,n,j;
        while (i!=n)
        {
            a[i] = v1[j];
            i++;
            a[i] = v2[j];
            i++;j++;
        }
        
        {
            ans.push_back(v1[i]);
            ans.push_back(v2[i]);
        }
        return ans;
    }
};
int32_t main()
{
    Solution s;
}