#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#define ll long long int
using namespace std;

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=2*n;
        int a[m],b[n];
        for(i=0;i<m;i++)
            cin>>a[i];

        sort(a,a+m);

        //for(i=0;i<m;i++)
        //    cout<<a[i]<<" ";
        //cout<<endl;

        cout<<a[(3*n-1)/2]<<endl;

        for(i=0;i<n;i++)
            cout<<a[i]<<" "<<a[n+i]<<" ";
        cout<<endl;





        /*for(i=1;i<=n;i++)
            b[i]=max(a[2*i-1],a[2*i]);
        for(i=1;i<=n;i++)
            cout<<b[i]<<" ";
        cout<<endl;*/
    }
    return 0;
}
