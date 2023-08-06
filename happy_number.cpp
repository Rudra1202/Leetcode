#include<bits/stdc++.h>
using namespace std;
#define int long long

bool happy_number(int t){
    int sum = 0;
    while (t>0)
    {
        sum+=pow(t%10,2);
        t/=10;   
    }
    if(sum>10)return happy_number(sum);
    else if(sum==1)return true;
    return false;
}

int32_t main(){
    int n =2;
    cout<<happy_number(n);
    return 0;
}