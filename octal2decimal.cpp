#include <iostream>
using namespace std;
int oct2dec(int n)
{
    int ans=0;
    int temp=1;
    while(n>0)
    {
        ans=ans+((n%10)*temp);
        temp=temp*8;
        n=n/10;
    }
    return ans;

}

int main()
{
    int x;
    cin>>x;
    cout<<oct2dec(x);
}