#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    
    int max_satisfaction=-1e+9;
    
    while(n--){
        int a,b;
        cin>>a>>b;
        
        int satisfaction= a- max(0,b-k);
        
        max_satisfaction=max(satisfaction, max_satisfaction);
    }
    
    cout<<max_satisfaction;
    
    return 0;

}
