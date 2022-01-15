#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n, k, l, c, d, p, nl, np;
    
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int maxi = 2000;
    
    maxi= min(maxi, (k*l)/nl);
    
    maxi= min(maxi, c*d );
    
    maxi= min(maxi, p/np );
    
    cout<<maxi/n;
    
    
    return 0;

}
