#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    vector<int> v{0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int count = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[count]!=v[i]){
            v[++count]=v[i];
        }
    }
    cout << count<<endl;
    for (auto it : v)
    {
        cout << it<<" ";
    }
    return 0;
}
//0 0 1 1 1 2 2 3 3 4
/*
0 1 1 1 1 2 2 3 3 4
0 1 2 1 1 2 2 3 3 4


1 1 2
1 2
*/