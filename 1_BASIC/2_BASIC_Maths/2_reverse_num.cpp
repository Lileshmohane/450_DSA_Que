#include<iostream>
using namespace std;
//   1234
//  4321
 // n=1234 n%10 123 = 4 ,12 =3 ,1=2 ,1 
int main(){
    int N;
    cin>>N;
    
   int  rev= 0;

  while (N!=0)
  {
     int tar= N%10;
     rev= rev*10+tar;
    N=N/10;
  }
  cout<<rev;
return 0;
}
