#include <bits/stdc++.h>
using namespace std;
int dec2oct(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
    x=x*8;
    x=x/8;

    while(x>0)
    {
        int last=n/x;
        n=n-(last*x);
        x=x/8;
        ans=ans*10+last;

    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    cout<<dec2oct(t);
}