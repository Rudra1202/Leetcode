#include <bits/stdc++.h>
using namespace std;
#define int long long
int lengthOfLastWord(string s)
{
    int count = 0;
    for (int i = s.length(); i > 0; i--)
    {
        if (isalpha(s[i]))
            count++;
        else if (count > 0 && !isalpha(s[i]))
            return count;
    }
    return count;
}
int32_t main()
{

    return 0;
}