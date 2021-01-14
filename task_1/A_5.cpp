#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<">>input the number of cards\n>";
    int n;cin>>n;
    cout<<">>input the numbers on cards\n>";
    char numbers[n];
    cin>>numbers;
    int eight=0,Neight,p=0;
    for(int i=0;i<n;i++)
        if(numbers[i]=='8')
            eight++;
    Neight=n-eight;
    //cout<<eight<<' '<<Neight;
    while(eight!=0)
    {
        for(int j=10;j>=0;j--)
        {
            if(Neight>=j && eight>=11-j)
            {
                p++;
                //cout<<Neight<<"+"<<eight<<endl;
                Neight-=j;
                eight-=11-j;
            }
        }
        if(Neight+eight<11)
            break;
    }
    //cout<<">>pairs made: "<<endl
    cout<<"pairs made: "<<p<<endl;


}