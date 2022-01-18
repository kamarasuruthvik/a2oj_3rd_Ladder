#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,k;
    cin>>n>>k;
    //array means whether that segment is selected or not , v is the result
    int array[(n*k + 1)]={0};
    vector<vector<int>> v(k+1, vector<int>(1, 0));
    
    
    for(int i=1;i<=k; i++){
        int x;
        cin>>x;
        
        array[x]=1;
        v[i][0]=x;
    }
    
    
    
    int j=1;
    for(int i=1;i<=n*k && j<=k;){
        int count=1;
        while(count!=n){
            
            if(array[i])
                i++;
            else
                v[j].push_back(i), count+=1, i++;
        }
        j+=1;
        
    }
    
    
    //printing result
    for(int a=1;a<k+1;a++){
        for(int b=0;b<n; b++){
            cout<<v[a][b]<<" ";
        }
        cout<<endl;
    }
        
    return 0;

}
