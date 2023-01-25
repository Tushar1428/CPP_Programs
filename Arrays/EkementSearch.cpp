#include<bits/stdc++.h>
using namespace std;

void ReturnIndex(int arr[],int key,int n)
{
    
    while(n>0)
    {
    if(key==arr[n/2])
    cout<<n/2<<endl;
    if(key>arr[n/2])
    n--;
    else if(key==arr[n])
    cout<<n;
    else
    n++;
    if(key==arr[n])
    cout<<n;
    }
}
int main()
{
   int n,key;
   cin>>n>>key;

   int arr[n];
   for(int i=0;i<n;i++)
   cin>>arr[i];
   
   n=sizeof(arr)/sizeof(arr[0]);
   ReturnIndex(arr,key,n);
   


return 0;
}