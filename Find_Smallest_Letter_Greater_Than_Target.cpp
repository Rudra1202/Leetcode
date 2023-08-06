#include <bits/stdc++.h>
using namespace std;
#define int long long
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int sample = -1, locate;
        if (find(letters.begin(), letters.end(), target) != letters.end())
            sample = lower_bound(letters.begin(), letters.end(), target) - letters.begin();
        else
            sample = 0;
        if (sample == letters.size())
            return letters[0];
        locate = sample;
        char c;
        for (int i = sample; i < letters.size(); i++)
        {
            if ((int)(letters[i]) > (int)(target))
            {
                c = letters[i], locate = i;
                break;
            }
        }
        if (locate != sample)
            return c;
        else
            return letters[0];
    }
};

int32_t main()
{
    Solution s;
    vector<char> v{'x', 'x', 'y','y'};
    char target = 'z';
    cout << s.nextGreatestLetter(v, target);
    return 0;
}