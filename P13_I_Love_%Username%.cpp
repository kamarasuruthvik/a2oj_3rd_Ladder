#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,x, total=0;
    cin>>n>>x;
    
    int small = x, big= x;
    
    for(int i=1; i<n ; i++){
        cin>>x;
        if(x<small)
            total+=1, small =x;
        if(x>big)
            total+=1, big=x;
            
    }
    
    cout<<total;
    
    return 0;
}
