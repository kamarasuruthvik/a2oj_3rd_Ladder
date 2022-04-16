#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int n;
  cin>>n;
  
  vector<string> v;
  
  for(int i=0; i<=n ; i++){
    int j=n-i;
    string s="";
    while(j){
      s+="  ";
      j--;
    }
    for(int k=0; k<=i;k++){
      if(k==0 && i==0){
        s=s+to_string(k);
        continue;
      }
      else
        s=s+to_string(k)+" ";
    }
    for(int k=i-1; k>=0;k-- ){
      if(k==0){
        s=s+to_string(k);
        continue;
      }
      s=s+to_string(k)+" ";
    }
    
    
    v.push_back(s);
  }
  
  for(int i=n-1;i>=0; i--)
    v.push_back(v[i]);
  
  for(auto &e: v)
    cout<<e<<endl;
  
  
  return 0;
}
