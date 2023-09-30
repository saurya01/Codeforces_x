#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int num,temp;
    cin>>num;
    temp = num;
    int count =0;
    while(temp){
            int key = temp%10;

                if(key==4 || key == 7)
                        count++;
            temp = temp/10;
    }
    if(count == 4 || count == 7){
        cout<<"YES";
        return 0;
    }
        cout<<"NO";
    return 0;
}