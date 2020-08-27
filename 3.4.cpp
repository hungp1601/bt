#include<bits/stdc++.h>
using namespace std;
double val(double n,double x)
{
    if(n==1)
        return sin(x);
    else
        return sin(val(n-1,x)+x);
}
int main(){
    double x,n;
    cin>>x>>n;
    cout<<val(n,x);//tinh bang radian nha
}
