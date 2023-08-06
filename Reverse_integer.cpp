#include <bits/stdc++.h>
using namespace std;
#define int long long
int reverse(int x)
{
    int b = 0;
    int sign = 0;
    if (x < 0)
        sign++;
    x = abs(x);
    while (x != 0)
    {
        b = b * 10 + x % 10;
        x /= 10;
    }
    if(b<INT_MIN||b>INT_MAX)return 0;
    if (sign > 0)
        return -b;
    return b;
    // string s = to_string(x);
    // reverse(s.begin(), s.end());
    // string a;
    // if (s[0] != '0')
    // {
    //     a += s[0];
    // }
    // for (int i = 1; i < s.length(); i++)
    // {
    //     a += s[i];
    // }
    // int b = stoi(a);
}
int32_t main()
{
    int t;
    cin >> t;
    cout << reverse(t) << endl;
    return 0;
}