#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    
    for(int i=0;i<a.length(); i++){
        char one = tolower(a[i]);
        char two = tolower(b[i]);
        
        if(one<two){
            cout<<"-1";
            return 0;
        }
        else if(two<one){
            cout<<"1";
            return 0;
        }
    }
    cout<<"0";
    
    return 0;
}
