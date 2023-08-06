#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    string convertToBase7(int num)
    {
        string s="";
        if (num == 0)
            return "0";
        if (num < 0)
        {
            s.push_back('-');
            num = abs(num);
        }
        int k = 0;
        for (int i = 0; i < num; i++)
        {
            if (pow(7, i) > num)
            {
                if (i > 0)k = i - 1;
                break;
            }
        }
        while (num > 0)
        {
            int carry = num / pow(7, k);
            stringstream ss;
            ss<<carry;
            string a;
            ss>>a;
            s+=a;
            num -= carry * pow(7, k);
            k--;
        }
        while (k>=0)    
            s.push_back('0');
        return s;
    }
};

int32_t main()
{
    Solution s;
    cout << s.convertToBase7(-430);
    return 0;
}