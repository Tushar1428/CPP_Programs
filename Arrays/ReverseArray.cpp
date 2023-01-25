#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,temp ,start;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

   // n=sizeof(arr)/sizeof(arr[0]);
    int end=n;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end-1];
        arr[end-1]=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


return 0;
}