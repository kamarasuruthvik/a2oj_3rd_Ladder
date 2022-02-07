#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int n;
    cin>>n;
    vector<vector<int>> v( 3, vector<int>(0,0));
    
    for(int i=0;i<n ;i++){
        int x;
        cin>>x;
        
        if(x>0)
            v[0].push_back(x);
        else if(x<0)
            v[1].push_back(x);
        else
            v[2].push_back(0);
            
    }
    
    int a=v[0].size(), b=v[1].size(), c=v[2].size();
    
    if( a==0  ){
        int last= v[1][b-1], secondLast= v[1][b-2];
        v[1].pop_back(), v[1].pop_back();
        v[0].push_back(last), v[0].push_back(secondLast);
        
        a+=2;
        b-=2;

    }

    if( b%2==0 ){
        
        int last = v[1][b-1];
        v[1].pop_back();
        
        b--;
        v[2].push_back(last);
        
        c++;
    }
    
    cout<<b<<" "; 
    for(auto &e : v[1])
        cout<<e<<" ";
    cout<<endl;
    
    cout<<a<<" "; 
    for(auto &e : v[0])
        cout<<e<<" ";
    cout<<endl;
    
    cout<<c<<" "; 
    for(auto &e : v[2])
        cout<<e<<" ";
    cout<<endl;
    
        
        
    return 0;
 
}
