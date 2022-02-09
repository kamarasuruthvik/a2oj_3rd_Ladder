#include<bits/stdc++.h>

using namespace std;

int main(){
    
    
    for(int i=0;i<8;i++){
        string s;
        cin>>s;
        for(int i=0;i<7;i++){
            if(s[i]==s[i+1]){
            cout<<"NO";
            return 0;
            }
        }
    }
    
    cout<<"YES";
    return 0;
}
