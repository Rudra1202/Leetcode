#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    string reverseVowels(string s)
    {
        int n = s.size();
        int cnt = 0;
        int p = 0;
        int q = n - 1;
        while (p < q)
        {
            while (p < n && !isVowel(s[p]))
                p++;
            while (q >= 0 && !isVowel(s[q]))
                q--;

            if (p < q)
            {
                swap(s[p], s[q]);
                p++;
                q--;
            }
        }
        return s;
    }
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return true;
        else
        return false;
    }
};
int32_t main()
{
    Solution s;
    string s1 = "hello";
    string s2 = "leetcode";
    cout << s.reverseVowels(s1) << endl;
    cout << s.reverseVowels(s2);
    return 0;
}