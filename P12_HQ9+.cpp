#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    bool flag=false;
    bool code= false;
    
    for(auto &ele : s){
        if(ele =='H' || ele=='Q' || ele=='9')
            flag=true;
    }
        
    if(flag)
        cout<<"YES";
        
    else
        cout<<"NO";
        
    return 0;
}
