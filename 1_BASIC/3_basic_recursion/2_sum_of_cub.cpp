#include<bits/stdc++.h>
using namespace std;
 void print (int N) {
        // base caselong 
      int sum = N * (N + 1) / 2;
    cout<<"The sum of the first "<<N<<" numbers is: "<<sum<<endl;
  }
    
int main(){
int n;
cout<<"enter a number :";
cin>>n;
print (n);
return 0;
}
