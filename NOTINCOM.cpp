#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        if (arr[mid] == x)
          return mid;

        if (arr[mid] > x)
          return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}

int main()
{
    int t,n,m;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        int a[n],b[m];
        int i,j,ans=0;

        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<m;i++)
            cin>>b[i];

        sort(b,b+m);

        for(i=0;i<n;i++)
        {
//printf("a[i]=%d\n",a[i]);
            int c=binarySearch(b,0,m-1,a[i]);
//printf("c=%d\n",c);
            if(c!=-1)
                ans++;
//printf("ans=%d\n\n",ans);
        }

        cout<<ans<<endl;
    }
    return 0;
}
Submission Info:
