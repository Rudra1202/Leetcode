#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++){
            if(nums.size()==i)return i;
            if (nums[i] != i)
                return i;
        }
    }
};
int32_t main()
{

    return 0;
}