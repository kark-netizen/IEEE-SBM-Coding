/*found an ambiguity in the question where if user inputs
"geeksforgeeks" the substrings "geeks" "eeks" "gee" etc occur
multiple times as substrings. Couldn't figure out if duplicates had to 
be accounted for or not but i didn't anyway. Sorry*/
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    cout<<"test case\n>";
    int t; cin>>t;
    string vowels="aeiouAEIOU";
    while(t!=0)
    {
        t--;
        cout<<"input the string\n>";
        string str;
        cin>>str;
        int size=str.length(),vowelCount=0;
        //cout<<vowel_count(str)<<endl;
        for(int i=0;i<10;i++)
        {
            size_t foundAt;int j=0;
            while(true)
            {
                foundAt=str.find(vowels[i],j);
                if(foundAt!=string::npos)
                {
                    vowelCount+=(foundAt+1)*(size-foundAt);
                    j=foundAt+1;
                }
                else 
                    break;
            }
            j=0;
        }
        cout<<"found "<<vowelCount<<" vowels in given string"<<endl;
    }
}