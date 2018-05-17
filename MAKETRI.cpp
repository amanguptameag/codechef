#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#define ll long long int
using namespace std;

void merge(ll arr[],ll l,ll m,ll r)
{
    ll i,j,k;
    ll n1=m-l+1;
    ll n2=r-m;

    ll L[n1],R[n2];

    for (i=0;i<n1;i++)
        L[i]=arr[l+i];
    for (j=0;j<n2;j++)
        R[j]=arr[m+1+j];

    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
            arr[k]=L[i++];
        else
            arr[k]=R[j++];
        k++;
    }

    while(i<n1)
        arr[k++]=L[i++];

    while(j<n2)
        arr[k++]=R[j++];
}

void mergeSort(ll arr[],ll l,ll r)
{
    if(l<r)
    {
        ll m=l+(r-l)/2;

        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}

int main()
{
    ll i,j,k=1,n,l,r,ans=0;
    cin>>n>>l>>r;
    ll a[n],c,d;

    for(i=1;i<=n;i++)
        cin>>a[i];

    mergeSort(a,1,n);
    //cout<<endl;

    ll b[n-1][2];

    for(i=1;i<n;i++)
    {
            ll min=a[i+1]-a[i]+1;
            ll max=a[i+1]+a[i]-1;

            b[k][1]=min;
            b[k][2]=max;
            k++;
    }

    for(i=n-1;i>=1;i--)
    {
        c=b[i][1];
        d=b[i][2];
        //cout<<l<<" "<<r<<endl;
        //cout<<c<<" "<<d<<endl;

        if((c==d && c==l) || (c<l && d==l))
        {
            ans++;
            break;
        }
        else if((c==d && c>=l && d<=r) || (c==r && d>r))
        {
            ans++;
            r=c-1;
        }
        else if(c<=l && d>=r)
        {
            ans+=r-l+1;
            break;
        }
        else if(c>l && c<r && d>=r)
        {
            ans+=r-c+1;
            r=c-1;
        }
        else if(c<=l && d>l && d<r)
        {
            ans+=d-l+1;
            break;
        }
        else if(c>l && c<r && d>l && d<r)
        {
            ans+=d-c+1;
            r=c-1;
        }

       //cout<<ans<<endl;
       //cout<<endl;
    }
    //cout<<endl;
    cout<<ans<<endl;

    return 0;
}   
