#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min1=INT_MAX, max1=INT_MIN;
    int min_index=-1,max_index=-1;
    for(int i=0; i<n; i++){
        cin>>arr[i];
            if(min1>=arr[i]){
                min1 = arr[i];
                min_index = i;
            }
            if(max1<arr[i]){
                max1 = arr[i];
                max_index = i;
            }
    }
//int count = 0;
if(min_index<max_index){
    min_index = (n-1) - min_index;
    cout<<min_index+max_index-1<<endl;
}
else
   { min_index = (n-1) - min_index;
    cout<<min_index+max_index;
   }
    //cout<<count;
    return 0;
}