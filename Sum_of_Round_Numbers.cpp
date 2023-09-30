#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        long int num,temp;
        cin>>num;

        vector<int> ans,ans1;
        temp = num;
        int count=0;
        while(temp){
            ans.push_back(temp%10);
            if(temp%10)
                count++;
            temp = temp/10;
        }
        cout<<count<<endl;
        for(int i=0; i<ans.size(); i++){
            if(ans[i]*pow(10,i))
            cout<<ans[i]*pow(10,i)<<" ";
        }
        cout<<endl;
    }

    return 0;
}