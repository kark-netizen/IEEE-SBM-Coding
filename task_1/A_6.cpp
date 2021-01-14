#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<">>enter test cases\n>";
    int t; cin>>t;
    while(t!=0)
    {
        t--;
        cout<<"enter current volume and desired volume\n>";
        long long x,y; cin>>x>>y;
        long long tmp=min(x,y);
        y=max(x,y);
        x=tmp;
        long long d=y-x, jumps=0;
        while(d!=0)
        {
            if(d/5!=0)
            {
                d-=5;
                jumps++;
            }
            else if(d/2!=0)
            {
                d-=2;
                jumps++;
            }
            else 
            {
                d-=1;
                jumps++;
            }
        }
        cout<<">>jumps made : ";
        cout<<jumps<<endl;
    }
}