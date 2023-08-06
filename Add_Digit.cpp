#include <bits/stdc++.h>
using namespace std;
#define int long long
int adddigit(int t)
{

    int sum = 0;
    while (t > 0)
    {
        sum += t % 10;
        t /= 10;
    }
    if (sum < 10)
        return sum;
    else
        return adddigit(sum);
}
int32_t main()
{
    int t = 38;
    cout<<adddigit(t);
    return 0;
}

/*
789
24
6
*/