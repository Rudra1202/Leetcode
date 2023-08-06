#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        if (num < 0) return false;
        for (int i = 0; i <= num; i++)
            if (i * i == num)
                return true;
            else if (i * i > num)
                return false;
        return false;
    }
};
int32_t main()
{
    Solution s;
    int t = 17;
    cout << s.isPerfectSquare(t);
    return 0;
}