#include <bits/stdc++.h>
using namespace std;
#define int long long

class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        vector<string> v;
        unordered_map<char, int> map;
        string t = "qwertyuiop";
        string m = "asdfghjkl";
        string b = "zxcvbnm";
        for (int i = 0; i < t.length(); i++)
            map[t[i]] = 1;

        for (int i = 0; i < m.length(); i++)
            map[m[i]] = 2;

        for (int i = 0; i < b.length(); i++)
            map[b[i]] = 3;

        for (int i = 0; i < words.size(); i++)
        {
            string sample = words[i];
            int locate = map[tolower(sample[0])];
            int count = 1;
            for (int j = 1; j < sample.length(); j++)
            {
                if (locate != map[tolower(sample[j])])
                    break;
                count++;
            }
            if (count == sample.length())
                v.push_back(sample);
        }
        return v;
    }
};

int32_t main()
{
    Solution s;
    vector<string> v{};
    vector<string> n = s.findWords(v);
    for (auto it : n)
    {
        cout << it << endl;
    }
    return 0;
}