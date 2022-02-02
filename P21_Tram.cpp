#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int count=0,result=0, n;
    cin>>n;
    
    while(n--){
        int a,b;
        cin>>a>>b;
        
        count=count-a;
        
        count=count+=b;
        
        result=max(count, result);
        
    }
    
    cout<<max(result,count);
    
    return 0;
 
}
