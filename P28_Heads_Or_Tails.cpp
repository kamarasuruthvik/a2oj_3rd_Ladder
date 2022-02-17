#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int x,y,a,b;
  cin>>x>>y>>a>>b;

  
  vector<pair<int,int>> solution;
  
  for(int i=a; i<=x; i++){
    for(int j=b; j<=y; j++){
      
      if(i>j)
        solution.push_back(make_pair(i,j));
    }
  }
  
  
  sort(solution.begin(), solution.end());
  
  cout<<solution.size()<<endl;
  
  for(auto &e: solution)
    cout<<e.first<<" "<<e.second<<endl;
    
  return 0;
}
