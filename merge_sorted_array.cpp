#include <bits/stdc++.h>
using namespace std;
#define int long long
void merge(vector<int> &a, int m, vector<int> &b, int n)
{
    int i = m-1, j =n-1,k=m+n-1;
    while(i>=0&&j>=0){
        if(a[i]>=b[j]){
            a[k]=a[i];
            i--;
        }
        else{
            a[k]=b[j];
            j--;
        }
        k--;
    }
    while(i>=0){
        a[k]=a[i];
        i--;
    }
    while(j>=0){
        a[k]=a[j];
        j--;
    }
}
int32_t main()
{

    return 0;
}