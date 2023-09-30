#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
       long long int n,a,b,c;
        cin>>a>>b>>c>>n;

        long long int sum=0;
        sum = n+a+b+c;
        if(sum%3 || (sum/3)<a || (sum/3)<b || (sum/3)<c){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}