#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int r, y;
        cin >> r;
        int a[r][2], count_r = 0;
        int b[y][2], count_y = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cin >> a[i][j];
                if(abs(x-a[i][j])==0 && abs(y-a[i][j+1])==0)
            }
        }
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> b[i][j];
            }
        }
    }
    return 0;
}