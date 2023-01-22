#include<bits/stdc++.h>

using namespace std;
int main()
{
   stack<string>books;
   
   books.push("cpp");
   books.push("java");
   books.push("python");
   books.push("html");
   books.push("react");

   while(!books.empty())
   {
    cout<<books.top()<<endl;
    books.pop();
   }
return 0;
}