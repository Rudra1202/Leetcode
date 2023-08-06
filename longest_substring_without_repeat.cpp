#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s;
    cin >> s;
    int count = 0;
    int i = 0, j = 0;
    int n = s.length();
    unordered_map<char, int> m;
    while ((i < n) && (j < n))
    {
        char c = s[j];
        unordered_map<char, int>::iterator it = m.find(c);
        if (it == m.end())
        {
            m[c] = j;
            j++;
            if (m.size() > count)
            {
                count = m.size();
            }
        }
        else
        {
            i = it->second + 1;
            m.clear();
            j = i;
        }
    }
    cout << count << endl;
    return 0;
}