#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;

    long int ans=0;
    ans = w*(w+1)/2;
    ans = k*ans;
    if(ans>n)
    cout<<ans-n;
    else
    cout<<0;
    return 0;
}