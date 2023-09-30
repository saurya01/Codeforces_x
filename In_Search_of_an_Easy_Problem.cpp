#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        ans.push_back(temp);
    }
int flag = 0;
for(int i=0; i<n; i++){
    if(ans[i]==1){
        flag=1;
        break;
    }
}
if(flag==1){
    cout<<"Hard";
}
else
    cout<<"Easy";
    return 0;
}