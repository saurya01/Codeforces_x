#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
        int cnt = 0;
    for(int i=0; i<n; i++){
        int cnt1=0;
        for(int j=0; j<3; j++){
            if(arr[i][j]==1){
                cnt1++;
            }
        }
        if(cnt1>=2)
            cnt++;
    }

    cout<<cnt;

    return 0;

}