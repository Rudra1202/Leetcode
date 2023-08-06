#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    // vector<int> v{3,2,2,3};
    vector<int> v{0, 1, 2, 2, 3, 0, 4, 2};
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != 2)
        {
            v[count] = v[i];
            count++;
        }
    }
    cout << count << endl;
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
// 0 1 2 2 3 0 4 2
// 0 1 3 0 4