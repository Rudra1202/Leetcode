#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    vector<char> v;
    string s = "a";
    for (int i = 0; i < s.length(); i++)
    {
        if (isalpha(s[i])||isdigit(s[i]))
        {
            cout<<s[i];
            v.push_back((char)tolower(s[i]));
        }
    }
    if (v.size() == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        bool count = 1;
        for (int i = 0; i < v.size()/2; i++)
        {
            if (v[i] != v[v.size() - i -1])
            {
                count = 0;
                break;
            }
        }
        if(count)cout<<"YES"<<endl;
        else cout<<"NO";
    }
    return 0;
}