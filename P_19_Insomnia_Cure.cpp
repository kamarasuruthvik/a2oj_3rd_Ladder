#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int k,l,m,n,d,total=0;
    
    cin>>k>>l>>m>>n>>d;
    
    
    for(int i=1; i<=d ; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            total+=1;
    }
    
    cout<<total;
    
    
    return 0;
 
}
