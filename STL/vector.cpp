#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    vector<int>v;
    v.reserve(100);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int no;
        cin>>no;
        v.push_back(no);
    }
     vector <int> :: iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
    cout<<endl;

    v.pop_back();
    v.insert(v.end()-1,5);

    for(it=v.begin();it!=v.end();it++)
    cout<<(*it)<<" ";
   

return 0;
}