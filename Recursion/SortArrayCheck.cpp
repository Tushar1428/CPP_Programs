#include<bits/stdc++.h>
using namespace std;

bool CheckArr(int arr[],int n)
{
    if(arr[0]>arr[1])
    return false;
    else
    CheckArr(arr+1,n-1);
    return true;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
   cout<< CheckArr(arr,n);
return 0;
}