#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;

int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];

   for (int i=0; i<=m; i++)
   {
     for (int j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   int i = m, j = n, ans=0;
   while (i > 0 && j > 0)
   {
      if (X[i-1] == Y[j-1])
      {
          ans++;
          i--; j--;
      }
      else if (L[i-1][j] > L[i][j-1])
      {
          ans++;
          i--;
      }
      else
      {
        ans++;
        j--;
      }
   }

   if(i==0 && j==0)
      return ans;
    else if(i==0)
      ans+=j;
    else
      ans+=i;
    return ans;
}

int main()
{
    ll t,n,m,i,j,p;
    cin>>t;
    while(t--)
    {
      cin>>m>>n;
      char a[m],b[n];
      char s[m];

      for(i=0;i<m;i++)
        cin>>s[i];

      p=0;
      a[0]=s[0];
      for(i=1;i<m;i++)
      {
        if(s[i]!=a[p])
        {
          p++;
          a[p]=s[i];
        }
      }
      m=p+1;

      for(i=0;i<n;i++)
        cin>>s[i];

      p=0;
      b[0]=s[0];
      for(i=1;i<n;i++)
      {
        if(s[i]!=b[p])
        {
          p++;
          b[p]=s[i];
        }
      }
      n=p+1;

      cout<<lcs(a,b,m,n)<<endl;
    }

    return 0;
}
