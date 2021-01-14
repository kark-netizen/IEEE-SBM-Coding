#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s1,s2,sum,str0;
    cout<<"input 1st number\n>"; cin>>s1; 
    cout<<"input 2nd number\n>"; cin>>s2;
    int l1=s1.length(),l2=s2.length(),carry=0,val1=0,val2=0;
    for(int i=0;i<max(l1,l2)-min(l1,l2);i++)
            str0.push_back('0');
        if(l1<l2)
            s1=str0+s1;
        //cout<<s1<<endl;
        if(l1>l2)
            s2=str0+s2;
        //cout<<s2<<endl;
        for(int i=s1.length()-1;i>=0;i--)
        {
            val1=s1[i]-'0';
            //cout<<val1<<endl;
            val2=s2[i]-'0';
            //cout<<val2<<endl;
            int x=val1+val2+carry;
            carry= x>9? 1:0;
            //cout<<x+'0'<<endl;
            if(x>9)
                sum.push_back(x-10+'0');    
            else 
                sum.push_back(x+'0');  
        }
        if(carry==1)
            sum.push_back(1+'0');
        reverse(sum.begin(),sum.end());
        cout<<"Sum is "<<sum<<endl;   
}