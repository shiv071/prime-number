#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
    int flag=0;
    if(n==0 || n==1){
        flag=1;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
   int min,max;
   cin>>min>>max;
   for(int i=min;i<=max;i++){
       if(prime(i)){
        cout<<i<<" ";
       }

   }
  return 0;
}
