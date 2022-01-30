#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, total=0;
    cin>>n;
    
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x+y+z>=2)
            total+=1;
    }
    cout<<total;
    
    return 0;
}
