#include<bits/stdtr1c++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int max = INT_MIN,num=0;
    for(int i=0; i<n; i++){
        int p,m;
        cin>>p>>m;
        num = num-p + m;
       
        if(max<num){
            max = num;
        }

    }
    cout<<max;
    return 0;
}