#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    int total=0, count=1;
    
    for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1])
            count+=1;
        else
            total+=count-1, count=1;
    }
    
    total+=count-1;
    
    cout<<total;
    
    return 0;
}
