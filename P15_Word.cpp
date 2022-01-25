#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int upper=0, lower=0;
    cin>>s;
    
    for(auto &e: s){
        if(e <'a')
            upper+=1;
        else
            lower+=1;
    }
    
    if(lower>=upper)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout<<s;
    
    return 0;
}
