#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    vector<int> v(n,0);
    
    
    for(int i=0 ; i<n ; i++){
        
        int x;
        cin>>x;
        v[x-1]=i;
    }
    
    for(auto &e: v){
        cout<<e+1<<" ";
    }
    
    return 0;

}
