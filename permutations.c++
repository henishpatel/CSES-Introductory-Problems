#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,i;
    cin >> n;
    if(n==1){
        cout << 1;
    }else if(n==2 || n==3){
        cout << "NO SOLUTION";
    }else{
        for(i=2;i<=n;){
            cout << i << " ";
            i=i+2;
        }
        for(i=1;i<=n;){
            cout << i << " ";
            i=i+2;
        }
    }
}