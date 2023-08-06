#include <bits/stdc++.h>
using namespace std;
#define int long long
double average(vector<int> &salary)
{
        int sum = 0, count = 0;
        int max_e = *max_element(salary.begin(), salary.end());
        int min_e = *min_element(salary.begin(), salary.end());
        for (int i = 0; i < salary.size(); i++)
        {
            if(salary[i]!=min_e && salary[i]!=max_e){
                sum+=salary[i];
                count++;
            }
        }
        return double(sum / count);
}
int32_t main()
{
    int t;
    cin >> t;
    vector<int> v;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << average(v);
    return 0;
}