#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //int arr[n];
        int sum=0,even=0,odd=0;
        for(int i=0; i<n; i++){
            int val;
            cin>>val;
            if(val%2)
                odd++;
            else
                even++;
            sum += val;
          //  cout<<odd<<" "<<even;
        }
        if(sum%2 || (even && odd)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}