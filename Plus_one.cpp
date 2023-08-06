#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> plusOne(vector<int> &v)
{
    int carry = 1;
    if (v[v.size() - 1] + carry < 10)
    {
        v[v.size() - 1] += carry;
    }
    else
    {
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i]+carry < 10)
            {
                v[i] += carry;
                carry=0;
                break;
            }
            if (v[i] + carry == 10)
            {
                v[i] = 0;
            }
        }
        if (carry == 1)
        {
            v.insert(v.begin(),1);
        }
    }
    return v;
}
int32_t main()
{
    // 9 9 1
    // 0
    return 0;
}