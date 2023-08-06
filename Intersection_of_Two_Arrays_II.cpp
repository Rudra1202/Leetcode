#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int,int>m1;
        unordered_map<int,int>m2;
        vector<int>ans;
        for (int i = 0; i < nums1.size(); i++)
            m1[nums1[i]]++;
        for (int i = 0; i < nums2.size(); i++)
            m2[nums2[i]]++;
        
        for (auto it : m1){
            if(m2[it.first]!=0){
                int a = min(m1[it.first],m2[it.first]);
                for (int i = 0; i < a; i++)
                {
                    ans.push_back(it.first);
                } 
            }
        }
        return ans;
    }
};
int32_t main()
{

    return 0;
}