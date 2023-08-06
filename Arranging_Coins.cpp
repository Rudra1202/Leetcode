#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=2) return 1;
        long long count = 0;
        for (int i = 1; i < n; i++)
        {
            count += i;
            if(count==n) return i;
            if(count>n) return i-1;
        }    
        return 0;
    }
};

int32_t main()
{
    Solution s;
    int a = s.arrangeCoins(6);
    return 0;
}