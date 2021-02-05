#include<bits/stdc++.h>
using namespace std;
#define endl ("\n")
#define pi (3.141592653589793238)
#define ll long long
#define mod 1000000007

int main(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=0;i<n;i++){
        ans= (ans*2)%mod;
    }
    cout<<ans;
}