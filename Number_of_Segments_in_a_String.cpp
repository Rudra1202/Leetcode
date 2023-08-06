#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    int countSegments(string s)
    {
        int count_space = 0;
        string word = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' && word.length() > 0)
            {
                count_space++;
                word = "";
            }
            else
                word += s[i];
        }
        if(word.length()>0) return count_space++; 
        return (count_space==0)?0 : count_space;
    }
};

int32_t main()
{

    return 0;
}