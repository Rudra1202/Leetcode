#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    void moveZeroes(vector<int> &v)
    {
        int count =0;
        int j = 0;
        if (v.size() != 1)
        {
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] != 0)
                {
                    v[j] = v[i];
                    j++;
                }
            }
            for (int i = j; i < v.size(); i++)
            {
                v[i]=0;
            }
        }
    }
};
int32_t main()
{
    // 0 1 0 3 12
    //
    return 0;
}