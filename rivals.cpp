#include<iostream>
using namespace std;
int swap(int n,int k,int min,int max)
{
    while(k!=0)
    {
        if(min!=1)
        {
            min--;
            --k;
        }
        else if(max!=n)
        {
            max++;
            --k;
        }
        else if(max==n && min==1)
            return max-min;
    }
    return (max-min);

}
int main()
{
    int t,n,k,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n>>k>>a>>b;
        if(a<b)
            cout<<swap(n,k,a,b);
        else
        {
            cout<<swap(n,k,b,a);
        }
    }
    return 0;
}