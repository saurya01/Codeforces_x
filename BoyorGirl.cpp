#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    //int cnt = 0;
    set<char> mp;
    for(int i=0; name[i]!='\0';i++){
        mp.insert(name[i]);
    }
    if(mp.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}