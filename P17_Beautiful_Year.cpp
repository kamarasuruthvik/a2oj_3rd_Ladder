#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    int temp=n;
 
    while(temp++ && temp<=9000){
 
        string s2= to_string(temp);
 
        int count=0;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                if(s2[i]==s2[j])
                    count+=1;
            }
        }
 
        if(count==0){
            cout<<temp;
            break;
        }
    }
    
    return 0;
}
