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
    cout<<"input elements seperated by space\n>";
    for(int i=0;i<n;i++)
    { 
        cin>>x;
        numbers.push_back(x);
    }
    cout<<"input position to remove\n>";
    int remInt; cin>>remInt;
    cout<<"input range to remove, seperate values by space\n>";
    int lRem,URem; cin>>lRem>>URem;
    numbers.erase(numbers.begin()+remInt-1);
    numbers.erase(numbers.begin()+lRem-1,numbers.begin()+URem-1);
    for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers[i]<<" ";
    }
}
