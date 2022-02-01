#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n, x;
    cin>>n>>x;
    
    int total=0;
    
    while(n--){
        int temp;
        cin>>temp;
        total+=temp;
    }
    
    cout<<ceil(abs(total)/x);
    
    return 0;
 
}
