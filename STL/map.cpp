#include<bits/stdc++.h>
using namespace std;

map<char,int>m;

void Count(char s[],int n){
    int count=0;
   

    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
        if(s[j]==s[i]-22){
            count++;
        m[s[j]]=count;
        count++;
        
        }
    }
   
    }
}

int main()
{
    int n;
    cin>>n;
    char s[n];

    for(int i=0;i<n;i++)
    cin>>s[i];

    for(auto it=m.begin();it!=m.end();it++)
    cout<<n/2-it->second<<endl;
  

return 0;
}