#include<bits/stdc++.h>
using namespace std;
int i;

int Min(int arr[],int n)
{
  int min;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<min)
    min=arr[i];
    else
    i++;

  }
  return i;
  

}
int Max(int arr[],int i,int n)
{
    int max;
    for(int n1=i;n1<n;n1++)
    {
    if(arr[n1]>max)
    max=arr[n1];
    else
    n1++;
    }
    return max;
}
int main()
{

    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    // if(arr[0]>arr[1])
    // {
    // min=arr[1];
    //  for(int i=2;i<n;i++)
    // {
    //    if(arr[i]>max)
    //    max=arr[i];
    //    else if(arr[i]<min)
    //    min=arr[i];
    //    else
    //    i++;
    // }
    // }
    // if(arr[0]<arr[1])
    // {
    //     min=arr[0];
    //  for(int i=2;i<n;i++)
    // {
    //    if(arr[i]>max)
    //    max=arr[i];
    //    else if(arr[i]<min)
    //    min=arr[i];
    //    else
    //    i++;
    // }
    // }
   
     Max(arr,i,n);
    
   
return 0;
}