#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    string s;
    cin>>s;
    
    vector<int> count(26,0);
    int unique=0;
    
    
    for(auto &e: s){
        count[e-'a']+=1;
    }
    
    for(auto &e: count){
        if(e!=0)
            unique+=1;
    }
    
    if(unique%2 == 1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
        
    return 0;
 
}
