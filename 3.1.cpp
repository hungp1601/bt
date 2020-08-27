#include<bits/stdc++.h>
using namespace std;
int gt(int n)
{
    if(n==1)
        return 1;
    else
        return gt(n-1)*n;
}
int main()
{
    int m,n;
    int ans=0;
    cin>>m>>n;
    ans=gt(n)/(gt(m)*gt(n-m));
    cout<<ans;
}

