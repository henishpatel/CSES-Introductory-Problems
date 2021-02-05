#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, sum = 0,sum1,i,j=0,k=0;
    cin >> n;
    long long arrS1[n],arrS2[n];
    for(i = 1; i <= n;i++){
        sum += i;
    }
    if(sum%2!=0){
        cout<<"NO";
    }else{
        sum /=2;
        sum1=sum;
        for(i=n;i>0;i--){
            if(i<=sum1){
                arrS1[j] = i;
                sum1 = sum1 -i;
                j++;
            }else{
                arrS2[k] = i;
                k++;
            }
        }
        cout<<"YES"<<endl;
        cout << j <<endl;
        for(i = 0; i < j;i++){
            cout<< arrS1[i]<< " ";
        }
        cout <<endl<< k <<endl;
        for(i = 0; i < k;i++){
            cout<< arrS2[i]<< " ";
        }
    }
}