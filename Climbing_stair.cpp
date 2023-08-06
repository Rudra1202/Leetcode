#include <bits/stdc++.h>
using namespace std;
#define int long long
int climbStairs(int n)
{
    // 4
    //  1 1 1 1 --> 1 1 2 --> 2 1 1 --> 2 2 --> 1 2 1
    // 5
    // 5
    //  1 1 1 1 1 --> 1 1 1 2 --> 1 1 2 1 --> 1 2 1 1 --> 2 1 1 1 --> 1 2 2 --> 2 1 2 --> 2 2 1
    /* 1 2 3 4 */
    /* 1 2 3 4 5 6 7 8 9 */
    // 5
    int cs[46];
    cs[0] = 0;
    cs[1] = 1;
    cs[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        cs[i] = cs[i - 1] + cs[i - 2];
    }
    return cs[n];
}