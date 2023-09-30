#include<bits/stdc++.h>
using namespace std;
void output(string str){
if(str.size()<=10){
    cout<<str<<endl;
    
}
else{
cout<<str[0]<<str.size()-2<<str[str.size()-1];
cout<<endl;
}

}

int main(){
    int n;
    cin>>n;
    vector<string> str;
    for(int i=0; i<n; i++){
        string st;
        cin>>st;
        str.push_back(st);
       
    }
    for(int i=0; i<n; i++){
        output(str[i]);
    }
return 0;
    
}