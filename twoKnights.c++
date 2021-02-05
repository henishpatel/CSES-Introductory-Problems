#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n=1,T,ans;
    cin >> T;
    for(n=1;n<=T;n++){
        ans = (n*n) * (n*n-1);
        ans = ans - (8) - (24) - (n-4)*16 - (16) - (n-4)*24 - (n-4)*(n-4)*8;
        cout << ans/2 << endl;
    }
    
}