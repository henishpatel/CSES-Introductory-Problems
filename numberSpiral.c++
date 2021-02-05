#include<bits/stdc++.h>
using namespace std;
 
long long finder(long long row,long col){
    long long n;
    if(row<col){
        if(col%2==0){
            n= (col-1)*(col-1);
            n= n+row;
        }else{
            n= col*col;
            n= n-row+1;
        }
    }else{
        if(row%2==0){
            n= (row)*(row);
            n= n-col+1;
        }else{
            n= (row-1)*(row-1);
            n=n+col;
        }   
    }
    return n;
}
 
int main(){
    long long T,y,x,i;
    cin >> T;
    for(i=0;i<T;i++){
        cin >> y >> x;
        cout << finder(y,x)<< endl;
    }
}