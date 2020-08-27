#include<bits/stdc++.h>
using namespace std;
int Max(int a[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return a[0];
	else
	{
		if (a[n - 1] > Max(a, n - 1))
			return a[n - 1];
		else
			return Max(a, n - 1);
	}
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Max(a,n);
}
