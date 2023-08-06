#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &v, int k)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < v.size(); i++)
        {
            if (m.count(v[i]))
            {
                cout << m.count(v[i]);
                if (abs(i - m[v[i]]) <= k)
                    return true;
            }
            m[v[i]] = i;
        }
        return false;
    }
};
int32_t main()
{

    return 0;
}