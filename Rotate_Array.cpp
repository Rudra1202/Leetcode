#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        reverse(nums.begin(),nums.begin()+nums.size()-k);
        reverse(nums.begin() + nums.size() - k , nums.end());
        reverse(nums.begin(),nums.end());
        // 1 2 3 4 5 6 7
        // 5 6 7 - 7 6 5
        // 1 2 3 4 - 4 3 2 1
        // 4 3 2 1 7 6 5
        // 5 6 7 1 2 3 4

        // -1 -100 3 99
        // 3 99 - 99 3
        // -1 -100 - -100 -1
        // -100 -1 99 3
        // 3 99 -1 -100
    }
};

int32_t main()
{
    Solution s;
    // vector<int> temp{1,2,3,4,5,6,7};
    vector<int> temp{-1, -100, 3, 99};
    s.rotate(temp, 2);
    return 0;
}