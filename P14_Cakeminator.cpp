#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,m; 
    cin>>n>>m;
    int total=0;
    set<int> r,c;
    
    
    for(int i=1;i<n+1; i++){
        for(int j=1; j<m+1; j++){
            char x;
            cin>>x;
            
            if(x=='S'){
                r.insert(i), c.insert(j);
            }
                
        }
    }
    
    map<int,bool> row, col;
    
    for(int i=1;i<n+1; i++){
        if(r.find(i)==r.end())
            row[i]=true;
    }
    for(int j=1; j<m+1; j++){
        if(c.find(j)==c.end())
            col[j]=true;
    }
    
    total= row.size()*m + col.size()*n - col.size()*row.size();
    
    cout<<total;
    
    return 0;
}
