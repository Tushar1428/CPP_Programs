#include<bits/stdc++.h>
using namespace std;
int main()
{
  array<int,5>arr;
 // array<int,5>arr1;
  
  for(int i=0;i<arr.size();i++)
  cin>>arr[i];

 //  for(int i=0;i<arr.size();i++)
 // cout<<arr[i]<<" ";
  sort(arr.begin(),arr.end());
  for(int i=0;i<arr.size();i++)
  cout<<arr[i]<<" ";
  // for(int i=0;i<arr1.size();i++)
  // cout<<arr1[i]<<" ";

  
  
return 0;
}