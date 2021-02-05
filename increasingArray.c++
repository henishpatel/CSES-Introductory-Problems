#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n=0,i=0,moves=0,diff=0;
    cin >> n;
    long long arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    for(i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            diff = arr[i] - arr[i+1];
            moves = moves + diff;
            arr[i+1] = arr[i];
        }
    }
    cout<<endl << moves;
}