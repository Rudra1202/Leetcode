#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> v;
        map<int, string> m;
        vector<int> v1 = score;
        sort(v1.begin(),v1.end(),greater<int>());
        for (int i = 0; i < score.size(); i++)
        {
            if(i==0)m[v1[i]] = "Gold Medal"; 
            else if(i==1)m[v1[i]] = "Silver Medal"; 
            else if(i==2)m[v1[i]] = "Bronze Medal"; 
            else m[v1[i]] = to_string(i+1); 
        }
        for(auto it:score)
            v.push_back(m[it]);
        return v;
    }
};

int32_t main()
{
    Solution s;
    vector<int>v{10,8,9,7,11};
    vector<string> ans = s.findRelativeRanks(v);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}