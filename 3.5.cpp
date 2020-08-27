#include<bits/stdc++.h>
using namespace std;
int val(int a[],int n)
{
    if (n == 0) return -1;
    else if (n== 1) return a[0];
    else
    return a[n-1] + val(a,n-1);
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<val(a,n);
}
