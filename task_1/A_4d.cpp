#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    set<int> s;
    cout<<"input queries\n>";
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {
        cout<<"input query and number separated by space\n>";
        int x,y; cin>>x>>y;
        if(x==1)
            s.insert(y);
        else if(x==2)
            s.erase(y);
        else if(x==3)
        {
            set<int>::iterator itr=s.find(y);
            if(itr!=s.end())
                cout<<"YES"<<endl;
            else 
                cout<<"No"<<endl;
        }

    }
}