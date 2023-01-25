#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,Max_sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i]; //4 3 5 6 
        if(sum<0) 
        sum=0;
        else if(sum>Max_sum)
        Max_sum=sum; //4 3 5 6 

    }
    cout<<Max_sum<<endl;

    


return 0;
}