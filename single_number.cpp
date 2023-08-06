#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    vector<int>v = {4,1,2,1,2};
    sort(v.begin(),v.begin()+v.size());
    for (int i = 0; i < v.size(); i+2)
    {
        if(v[i]!=v[i+1]){
            cout<<v[i];
            break;
        }
    }
    
    return 0;
}