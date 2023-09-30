#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        int key;
        cin>>key;
        ans[key-1]=i+1;
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}