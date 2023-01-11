#include<iostream>
using namespace std;
bool check(int arr[],int n){
    for (int  i = 0; i < n; i++)
    {
      if (arr[i]>arr[i+1])
      {
       return false;
      }
    }
     return true;
}
int main(){
    int n;
    cin>>n;
int arr[]={1,2,3,4,5};
bool an= check(arr,n);
if (an)
{
   cout<<"  array is shorted "<<endl;
}
else
{
    cout<<"arr is not shorted "<<endl;
}

return 0;
}
