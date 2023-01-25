#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,min,max;
   cin>> n;
   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];

  
      if(arr[0]>arr[1])
      {
        min=arr[1];
        max=arr[0];
      }
      else
      {
        min=arr[0];
        max=arr[1];
      }
      for(int i=2;i<n;i++)
      {
      if(arr[i]>max)
      max=arr[i];
      else if(arr[i]<min)
      min=arr[i];
      }
      cout<<max<<endl<<min<<endl;



return 0;
}