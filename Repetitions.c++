#include<bits/stdc++.h>
using namespace std;

int main(){
   string s;
   getline(cin,s);
   long long len = s.length();
   long long i,counter=0,j,arr[len];
   for(i=0,j=0;i<len;i++){
       if(s[i]==s[i+1]){
           counter++;
       }else{
           arr[j] = counter;
           j++;
           counter = 0;
       }
   }
   sort(arr,arr+(j));
   cout<<(arr[j-1]+1);
}