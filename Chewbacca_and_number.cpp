#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int num,temp,sum=0;
    cin>>num;
    temp = num;
    vector<int> ans;

    while(temp){
            ans.push_back(temp%10);
            temp = temp/10;
    }

    reverse(ans.begin(),ans.end());

    for(int i=0; i<ans.size(); i++){
            if(i==0 && (9-ans[i]==0)){
                ans[i] = ans[i];
            }
            else if(ans[i]>4)
                ans[i] = 9-ans[i];

            sum = sum*10 + ans[i];
    }

    cout<<sum;
    return 0;
}