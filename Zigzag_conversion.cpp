#include <bits/stdc++.h>
using namespace std;
#define int long long
string convert(string s, int numRows)
{
    if (s.empty() || numRows <= 0)
    {
        return " ";
    }
    if (numRows == 1)
    {
        return s;
    }
    string ans;
    int step = 2 * numRows - 2;
    for (int i = 0; i < numRows; i++)
    {
        for (int j = i; j < s.length(); j += step)
        {
            ans += s[j];
            if (i != 0 && i != numRows - 1 && (j + step - 2 * i) < s.length())
            {
                ans += s[step + j - 2 * i];
            }
        }
    }
    return ans;
}
int32_t main()
{
    string s;
    cin >> s;
    int num;
    cin >> num;
    string ans = convert(s, num);
    cout << ans << endl;
    return 0;
}

// palindromic

/*
p 00        r 06
a 11    d   o 17
l   n       m   c
i           i

==> pradolnmcii
*/