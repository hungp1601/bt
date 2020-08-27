#include<bits/stdc++.h>
using namespace std;
long long bin(int n) {
    long long a;
    if(n==0)
         return 0;
    else
         a=n%2;
    return bin(n/2)*10+a;
}
int main()
{
    int n;
    cin>>n;
    cout<<bin(n);
}
