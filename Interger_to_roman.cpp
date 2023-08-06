#include <bits/stdc++.h>
using namespace std;
#define int long long
string intToRoman(int n)
{
    string s = "";
    vector<string> roman({"I", "VI", "V", "XI", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"});
    vector<int> value({1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000});
    int i = roman.size() - 1;
    while (n != 0)
    {
        while (value[i] <= n)
        {
            s += roman[i];
            n -= value[i];
        }
        i--;
    }
    return s;
}
int32_t main()
{
    int n;
    cin >> n;
    cout << intToRoman(n);
    return 0;
}