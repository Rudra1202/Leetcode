#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> v;
        for (int i = 0; i < nums1.size(); i++)
        {
            int sample = -1;
            int k = lower_bound(nums2.begin(), nums2.end(), nums1[i]) - nums2.begin();
            cout<<nums1[i]<<" "<<k<<endl;
            for (int j = k+1; j < nums2.size(); j++)
            {
                if (nums2[j] > nums2[k])
                {
                    sample = nums2[j];
                    break;
                }
            }
            v.push_back(sample);
        }
        return v;
    }
};

int32_t main()
{
    Solution s;
    vector<int> v1{3, 4};
    vector<int> v2{1, 3, 4, 2};
    // vector<int> v1{2,4};
    // vector<int> v2{1, 2, 3, 4};
    vector<int> v3;
    v3 = s.nextGreaterElement(v1, v2);
    for (auto it : v3)
        cout << it << " ";
    return 0;
}