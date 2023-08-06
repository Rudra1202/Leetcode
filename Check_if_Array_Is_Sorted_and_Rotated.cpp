#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0, pos;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] < nums[i])
            {
                x++;
            }
        }
        if(nums[nums.size()-1]>nums[0]) x++;
        if(x>1)return false;
        return true;
    }
};

int32_t main()
{

    return 0;
}