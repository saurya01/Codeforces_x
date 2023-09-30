#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans = INT_MAX;
    if(nl>k*l){
        cout<<0;
        return 0;
    }
    if(np>p){
        cout<<0;
        return 0;
    }
    ans = min(ans,(k*l)/nl);
    ans = min(ans,c*d);
    ans = min(ans,p/np);
    ans = ans/n;
    cout<<ans;
    return 0;
}