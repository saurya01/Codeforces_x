#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    bool temp = true;
    for(int i=0; i<n; i++){
        if(i%2==0){
            for(int j=0; j<m; j++)
                cout<<"#";
        }
        else{
            if(temp){
            for(int j=0; j<m-1; j++)
                cout<<".";
            cout<<"#";
            }
            else{
            cout<<"#";
                for(int j=0; j<m-1; j++)
                cout<<".";
            
            }
            temp = !temp;
        }
    cout<<endl;
    }
    return 0;
}