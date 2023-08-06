#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int sum = 0;
        int p = 0;
        string ans = "";
        while (i >= 0 && j >= 0)
        {
            int n1 = num1.at(i) - '0';
            int n2 = num2.at(j) - '0';
            sum = (n1 + n2) + p;
            p = sum / 10;
            ans += to_string(sum % 10);
            j--;
            i--;
        }
        while (i >= 0)
        {
            char n1 = num1.at(i) - '0';
            sum = n1 + p;
            p = sum / 10;
            ans += to_string(sum % 10);
            i--;
        }
        while (j >= 0)
        {
            char n1 = num2.at(j) - '0';
            sum = n1 + p;
            p = sum / 10;
            ans += to_string(sum % 10);
            j--;
        }
        if (p > 0)
            ans += to_string(p % 10);
        reverse(ans.begin(), ans.begin() + ans.size());
        return ans;
    }
};
int32_t main()
{

    return 0;
}