#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin>>n;
  
  unordered_set<int> s;
  
  for(int i=1; i<=n ; i++)
    s.insert(i);
    
  for(int i=1; i<=n ; i++){
    int x;
    cin>>x;
    
    if( s.find(x) != s.end())
      s.erase(x);
    
  }
  
  cout<<s.size();
  return 0;
}
