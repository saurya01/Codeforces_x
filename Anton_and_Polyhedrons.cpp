#include<bits/stdc++.h>
using namespace std;
int main(){
  
    int n;
    cin>>n;
    vector<string> ans;

    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;
        ans.push_back(temp);
    }
    
    int sum=0;
   
   for(int i=0; i<n; i++){
        if(ans[i]=="Tetrahedron"){
            sum += 4;
        }
        else if(ans[i]=="Cube"){
            sum += 6;
        }
        else if(ans[i]=="Octahedron"){
            sum += 8;
        }
        else if(ans[i]=="Dodecahedron"){
            sum += 12;
        }
        else if(ans[i]=="Icosahedron"){
            sum += 20;
        }
        
    }
    cout<<sum;
    return 0;
}