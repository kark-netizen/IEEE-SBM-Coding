#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void print(vector<vector<int>> vec, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<vec[i][j]<<"   ";
        cout<<endl;
    }
}
int main()
{
    cout<<">>enter size of array\n>";
    int n,sum1=0,sum2=0; cin>>n;

    vector<vector<int>> vec(n, vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        cout<<">";
        for(int j=0;j<n;j++)
        {
            cin>>vec[i][j];
        }
    }
    print(vec,n );
    for(int i=0;i<n;i++)
    {
        sum1+=vec[i][i];
        sum2+=vec[i][n-i-1];
    }
    cout<<sum1<<" "<<sum2<<" "<<abs(sum1-sum2);
}