#include<bits/stdc++.h>
using namespace std;
int ucln(int a,int b)
{
    if (b == 0) return a;
    return ucln(b, a % b);
}
int main()
{
    int a,b;
    int ans=0;
    cin>>a>>b;
    ans=a*b/ucln(a,b);
    cout<<ans;
}
