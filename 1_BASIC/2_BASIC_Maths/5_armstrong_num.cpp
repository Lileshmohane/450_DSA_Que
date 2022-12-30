#include<bits/stdc++.h>
using namespace std;
//  check  a number is armsrtiong or not 
bool armstrong(int n){
    int origenalnum=n;
    int sum=0;
     // n=153 , // 
   int sumofpow=0;
   while (n!=0)
   {
    int digit= n%10;
    sumofpow+=digit*digit*digit;
    n/=10;
   }
   return (sumofpow == origenalnum);
    
}
int main(){

int n1=153;

if( armstrong(n1)){
    cout<<" yes it is armsrtiong "<<endl;
}
else
{
    cout<<" no  it is not a armstiong "<<endl;
}

return 0;
}
