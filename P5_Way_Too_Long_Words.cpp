#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        
        string s;
        cin>>s;
        int len=s.length();
        
        
        if(len>10)
            cout<<s[0]<<len-2<<s[len-1];
        else
            cout<<s;
        
        cout<<endl;
    }
    
    return 0;

}
