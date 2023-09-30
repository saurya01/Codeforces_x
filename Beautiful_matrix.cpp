#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int k,l;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                k=i,l=j;
            }
        }
    }
    int sum = abs(k-2)+abs(l-2);
    cout<<sum;
    return 0;
}