#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int cnt1=0,cnt2=0;
        for(int j=0; j<n; j++){
            if(j%2 != arr[j]%2){
                    if(arr[j]%2){
                        cnt1++;
                    }
                    else
                        cnt2++;
            }
        }
        if(cnt1!=cnt2)
            cout<<-1<<endl;
        else
        cout<<cnt1<<endl;
    }
    return 0;
}