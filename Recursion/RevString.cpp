#include<bits/stdc++.h>
using namespace std;

 RevSt(string s[],int n,int i){
    if(i>n)
    return s;
    swap(s[i],s[n-1]);
    RevSt(s,n-1,i+1);

}
int main()
{
    int n;
    cin>>n;
    string s[n];
    int i=0;
    for(int i=0;i<n;i++)
    cin>>s[i];

    RevSt(s,n,i);



return 0;
}