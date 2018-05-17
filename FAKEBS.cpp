#include <bits/stdc++.h>
#define MAX 100001
#define mod 1000000007
#define ll long long int
using namespace std;

ll binarySearch(pair<ll,ll>b[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = (r+l)/2;
        if (b[m].first == x)
            return m;
        if (b[m].first < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    ll t,n,q;
    cin>>t;

    while(t--)
    {
        cin>>n>>q;
        ll a[n],i;
        pair<ll,ll>b[n];

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n;i++)
            b[i]=make_pair(a[i],i);

        sort(b,b+n);

        while(q--)
        {
            ll m,p,index,mid=-1,l=0,r=n-1,left=0,right=0;
            cin>>m;
            p=binarySearch(b,0,n-1,m);
            index=b[p].second;

            while (mid!=index)
            {
                mid = (r+l)/2;

                if (mid == index)
                    break;
                else if (mid < index)
                {
                    l = mid + 1;
                    if (a[mid]>a[index])
                        left++;
                }
                else
                {
                    r = mid - 1;
                    if (a[mid]<a[index])
                        right++;
                }
            }

            if(left>p || right>n-p-1)
                cout<<-1<<endl;
            else
                cout<<max(left,right)<<endl;
        }

    }
    return 0;
}
