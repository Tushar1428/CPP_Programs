#include<bits/stdc++.h>
using namespace std;
int main()
{
    int Q;
    cin >> Q;
    
    map<string, int> m;
    for ( int i = 0; i < Q; ++i ) {
        int query, val;
        string name;
        
        cin >> query >> name;
        m.emplace(name, 0);
        
        if ( query == 1 ) {
            cin >> val;
            m[name] += val;    
        } else if ( query == 2 ) {
            m[name] = 0;
        } else { // if ( query == 3 )
            cout << m[name] << endl;   
        }
    }
return 0;
}