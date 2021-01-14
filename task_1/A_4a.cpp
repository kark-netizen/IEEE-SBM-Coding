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
    cout<<"input elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<">"; 
        cin>>x;
        numbers.push_back(x);
    }
    sort(numbers.begin(),numbers.end());
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }
}