#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int hexa2dec(string n)
{int ans,i,s;
int x=1;
s=n.size();
for(i=s-1;i>=0;i--)
{
    if(n[i]>='0' && n[i]<='9')
    ans=ans+(x*(n[i]-'0'));
    else if(n[i]>='A'&&n[i]<='F')
    ans=ans+(x*(n[i]-'A'+10));

    x=x*16;
}
return ans;
}
int32_t main()
{
    string str;
    cin>>str;
    cout<<hexa2dec(str);
}