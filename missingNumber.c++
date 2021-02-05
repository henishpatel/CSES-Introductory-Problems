#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,i;
    cin >> n;
    long long arr[n-1];
    for(i=0;i<n-1;i++){
        cin >> arr[i];
    }
    sort(arr,arr+(n-1));
    if(n==2){
        if(arr[0]==1){
            cout << 2;
        }else{
            cout << 1;
        }
    }else if(arr[n-2] != n){
        cout << n;
    }else{
        for(i=0;i<n-1;i++){
            if(arr[i]!=(i+1)){
                cout << "\n"<< (i+1);
                break;
            }
        }
    }
}