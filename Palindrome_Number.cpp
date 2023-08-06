#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ispalindrome(int n)
{
    string s = to_string(n);
    // cout<<s[0]<<" "<<s[1]<<" "<<s[2]<<endl;
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1 ])
        {
            return 0;
        }
    }
    return 1;
}
int32_t main()
{
    int n;
    cin >> n;
    cout << ((ispalindrome(n)) ? "true" : "false");
    return 0;
}