class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int a = 0, b = 0;
        for (auto it = 0; it != nums.size(); it++)
        {
            for (auto i = it + 1; i != nums.size(); i++)
            {
                if ((nums[it] + nums[i]) == target)
                {
                    cout << it << " " << i << endl;
                    a = it, b = i;
                }
            }
        }
        return (a, b);
    }
};