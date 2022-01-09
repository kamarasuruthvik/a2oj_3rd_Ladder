#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long n; 
    cin>>n;
    int count=0;
    
    while(n!=0){
        if(n%10==4 || n%10==7){
            count+=1;
        }
        n=n/10;
    }
    
    //count is the number of lucky numbers in n
    
    if(count==0){
        cout<<"NO";
        return 0;
    }
    
    
    while(count!=0){
        if(count%10!=4 && count%10!=7){
            cout<<"NO";
            return 0;
        }
        count=count/10;
    }
    
    cout<<"YES";
    
    return 0;
}
