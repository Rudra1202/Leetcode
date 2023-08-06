#include <bits/stdc++.h>
using namespace std;
#define int long long
int maxArea(vector<int>& a)
{
    int c = 0;
    int left = 0, right = a.size() - 1;
    while (left < right)
    {
        c = max(c, min(a[left], a[right]) * (right - left));
        if(a[right]>a[left])left++;
        else right--;
    }
    return c;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i + 1; j < v.size(); j++)
    //     {
    //         n = max(n, min(v[i], v[j]) * (j - i));
    //     }
    // }
    // return n;
}
int32_t main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >>a;
        v.push_back(a);
    }

    cout << maxArea(v);
    return 0;
}