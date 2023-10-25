#include <bits/stdc++.h>
using namespace std;

int decimal2bin(int n)
{
    int x=1;
    int ans=0;
    while(x<=n)
    x=x*2;
    x=x/2;

    while(x>0)
    {
        int lastdigi=n/x;
        n=n-(lastdigi*x);
        x=x/2;
        ans=ans*10+lastdigi;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    cout<<decimal2bin(t);
    return 0;
}
