#include<bits/stdc++.h>
using namespace std;

void solution(){
    
    string A, B, C;
    cin>>A>>B>>C;
    
    vector<int> prev(26,0) , next(26,0);
    
    for(auto &letter: A)
        prev[letter-'A']+=1;
        
    for(auto &letter: B)
        prev[letter-'A']+=1;
        
    for(auto &letter: C)
        next[letter-'A']+=1;
        
        
    if(prev!=next)
        cout<<"NO";
    
    else
        cout<<"YES";
}

int main(){
    
    
    solution();
    
    
    return 0;
}
