#include<iostream>
using namespace std;
int gcd(int a,int b){
//  using recursion  
//  base case
if (b==0)
{
    return a;
}
//  
return gcd(b,a%b);
}
int main(){
cout<<gcd(12,18)<<endl;
cout<<gcd(18,12)<<endl;
cout<<gcd(14,18)<<endl;
//  now lcm
cout<<12*18/gcd(12,18)<<endl;
return 0;
}
