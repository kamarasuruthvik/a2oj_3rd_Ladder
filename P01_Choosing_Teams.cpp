#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int times= 5-k;
    int total=0;
    for(int i = 0 ; i<n ; i++){
        int x;
        cin>>x;
        if(x<=times)
            total++;
    }
    
    cout<<total/3<<endl;
    
    return 0;
}
