#include<bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin>>s;
    
    vector<string> answer;
    string temp= "";
    
    for(int i=0; i<s.length(); i++){
        
        
        string next= s.substr(i,3);
        if( next == "WUB"){
            i=i+2;
            if(temp.length())
                answer.push_back( temp ), temp="";
                
        }
        
        else
            temp+= s[i];
    }
    
    if(temp.length())
      answer.push_back(temp);
      
    for(auto &e: answer)
        cout<<e<<" ";
    
    return 0;
}
