#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        int n = sqrt(area);
        vector<int> v;
        int min_e = INT_MAX;
        int sample;
        int w;
        for (int i = 1; i < n; i++)
        {
            if (area % i == 0)
            {
                sample = min_e;
                min_e = min(min_e, abs(area / i - i));
                if(sample !=min_e){
                    w = i;
                }
            }
        }
        v.push_back(area/w);
        v.push_back(w);
        return v;
    }
};

int32_t main()
{

    return 0;
}