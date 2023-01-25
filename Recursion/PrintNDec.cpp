#include<bits/stdc++.h>
using namespace std;

void PrintN(int n)
{
   if(n==0)
   return ;
   cout<<n<<" 7";
   PrintN(n-1);
}
int main()
{
    int n;
    cin>>n;
    PrintN(n);


return 0;
}