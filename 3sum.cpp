#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<vector<int>> threeSum(vector<int> &v)
{
    vector<int>temp;
    vector<vector<int>>ans;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size()-1; j++)
        {
            if (v[i] + v[j + 1] + v[j]){
                temp.push_back(v[i]);
                temp.push_back(v[j+1]);
                temp.push_back(v[j]);
                ans.push_back(temp);
            }
        }
    }
    return ans;
}
int32_t main()
{
    vector<int> v;
    for (int i = 0; i < 6; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    threeSum(v);
    return 0;
}
