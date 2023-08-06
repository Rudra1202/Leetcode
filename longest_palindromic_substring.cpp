#include <bits/stdc++.h>
using namespace std;
string longestPalSubstr(string str)
{
    int n = str.size();
    bool table[n][n];
    int maxLength = 1, start = 0;
    memset(table, 0, sizeof(table));
    for (int i = 0; i < n; i++)
    {
        table[i][i] = true;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            table[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }
    for (int k = 3; k < n; k++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int j = i + k - 1;
            if(table[i+1][j-1] && str[i]==str[j]){
                table[i][j]=true;
                if(k>maxLength){
                    maxLength=k;
                    start=i;
                }
            }
        }
    }
    string s ;
    cout << "Longest palindrome substring is: ";
    for (int i = start; i <= (start + maxLength - 1); ++i)
        s+=str[i];
    return s;
}
int main()
{
    string str = "forgeeksskeegfor";
    string s = longestPalSubstr(str);
    cout << s << endl;
    return 0;
}
// string longestPalSubstr(string str)
// {
//     int n = str.size();
//     bool table[n][n];
//     memset(table, 0, sizeof(table));
//     int maxLength = 1;
//     for (int i = 0; i < n; ++i)
//         table[i][i] = true;
//     int start = 0;
//     for (int i = 0; i < n - 1; ++i)
//     {
//         if (str[i] == str[i + 1])
//         {
//             table[i][i + 1] = true;
//             start = i;
//             maxLength = 2;
//         }
//     }
//     for (int k = 3; k <= n; ++k)
//     {
//         for (int i = 0; i < n - k + 1; ++i)
//         {
//             int j = i + k - 1;
//             if (table[i + 1][j - 1] && str[i] == str[j])
//             {
//                 table[i][j] = true;
//                 if (k > maxLength)
//                 {
//                     start = i;
//                     maxLength = k;
//                 }
//             }
//         }
//     }
//     string s ;
//     cout << "Longest palindrome substring is: ";
//     for (int i = start; i <= (start + maxLength - 1); ++i)
//         s+=str[i];
//     return s;
// }
