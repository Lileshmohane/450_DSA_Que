#include<iostream>
using namespace std;
//  first we reverse a array  
int reverse(int n){
 int re = 0;
 while (n>0)
 {
     int rem= n%10;
     re = re* 10+rem;
     n=n/10;

 }

 return re;
}
int main(){

int n;
cin>>n;
//  fun call 
int pa = reverse(n);
//  now we check  a numbers are palindrom or not 
if (n==pa)
{
  cout<<" yes it is palindrom ";
}
else
{
    cout<<" is not palindrom";
}

return 0;
}
