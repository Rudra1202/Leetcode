#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    vector<int> v{1, 3, 5, 6};
    int target = 2;
    cout<<lower_bound(v.begin(),v.end(),target)  -v.begin();
}