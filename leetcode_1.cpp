#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    int i = 1;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int count = 0;
        int a[x][y];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int j = 0; j < y; j++)
        {
            int max_e = INT_MIN;
            for (int i = 0; i < x; i++)
            {
                max_e = max(max_e, a[i][j]);
            }
            if (max_e != a[z - 1][j])
                count += (max_e - a[z - 1][j]);
        }
        cout << "Case #" << i << ": " << count << endl;
        i++;
    }
    return 0;
}