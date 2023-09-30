#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        if(n<=2){
            cout<<1<<endl;
            continue;
        }
        n = n-2;
        cout<<ceil((float)n/m)+1<<endl;

        }
    return 0;
}