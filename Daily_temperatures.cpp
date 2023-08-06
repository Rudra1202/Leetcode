#include <bits/stdc++.h>
using namespace std;
#define int long long
vector<int> dailyTemperatures(vector<int> &temp)
{
    vector<int> v;
    int pos;
    v.push_back(0);
    for (int i = temp.size(); i > 0; i--)
    {
        if(v[i]>v[i-1]){
            pos = 1;
            v.push_back(1);
        }
        else {
            v.push_back(0);
        }
    }
}
int32_t main()
{

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// vector<int> dailyTemperatures(vector<int> &temperatures)
// {
//     int pos = 0;
//     vector<int> v;
//     vector<int>::iterator low;
//     for (int i = 0; i < temperatures.size(); i++)
//     {
//         if (temperatures[i + 1] > temperatures[i])
//         {
//             v.push_back(1);
//         }
//         else
//         {

//             int d = *max_element(temperatures.begin() + i, temperatures.end());
//             if (d > temperatures[i])
//             {
//                 for (int j = i; j < temperatures.size(); j++)
//                 {
//                     if (temperatures[j] > temperatures[i])
//                     {
//                         v.push_back(j - pos);
//                         break;
//                     }
//                 }
//             }
//             else
//                 v.push_back(0);
//         }
//         pos = i + 1;
//     }
//     if (v.size() != temperatures.size())
//     {
//         int diff = temperatures.size() - v.size();
//         while (diff != 0)
//         {
//             v.push_back(0);
//             diff--;
//         }
//     }
//     return v;
// }
// int32_t main()
// {

//     return 0;
// }