#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<vector>
#include<time.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    cout<<"input size of vector\n>";
    long n; cin>>n;
    vector<long long> numbers;
    long long x;
    cout<<"input sorted elements seperated by space\n>";
    for(int i=0;i<n;i++)
    { 
        cin>>x;
        numbers.push_back(x);
    }
    cout<<"input number of queries\n>";
    int q; cin>>q;
    vector<long> se(q);
    cout<<"input search elements, separated by space\n>";
    for(int i=0;i<q;i++)
    {
        cin>>se[i];
    }
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<numbers.size()-1;j++)
        {
            if(se[i]==numbers[j])
            {
                cout<<"Yes "<<j+1<<endl;
                break;
            }
            else if(se[i]>numbers[j] && se[i]<numbers[j+1])
            {
                cout<<"No "<<j+2<<endl;
                break;
            }
        }
        if(se[i]==numbers[numbers.size()-1])
            cout<<"Yes "<<numbers.size()<<endl;
    }
}