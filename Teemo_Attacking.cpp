#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    int findPoisonedDuration(vector<int> &timeSeries, int duration)
    {
        int ans = 0;
        for (int i = 0; i < timeSeries.size(); i++)
            ans+= min(duration,timeSeries[i+1] - timeSeries[i]);
        ans +=duration ;
        return ans;
    }
};
int32_t main()
{

    return 0;
}