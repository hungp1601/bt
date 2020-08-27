#include<bits/stdc++.h>
using namespace std;
int val(int n,int x)
{
    if(n==1)
        return pow((x-1),2);
    else
        return pow(x-val(n-1,x),2);
}
int main(){
    int x,n;
    cin>>x>>n;
    cout<<val(n,x);
}
