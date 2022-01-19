#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, t;
    string s;
    cin>>n>>t>>s;
    
    for(int i=0; i<t; i++){
        vector<int> positions;
        for(int j=0;j<s.length()-1;j++){
            if(s[j]=='B' && s[j+1]=='G')
                positions.push_back(j);
        }
        
        for(auto &pos: positions){
            s[pos]='G', s[pos+1]='B';
        }
    }
    
    cout<<s;
}
