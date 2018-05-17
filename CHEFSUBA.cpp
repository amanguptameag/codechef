#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll n,k,p,i,j,m;
    cin>>n>>k>>p;

    ll b[2*n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        b[n+i]=b[i];
    }

    char s[100002];
    cin>>s;

    if(k>=n)
        k=n;

    //for(i=0;i<2*n;i++)
    //    cout<<b[i]<<" ";
    //cout<<endl;

    multiset <ll, greater <ll> > a;
    multiset <ll, greater <ll> > :: iterator itr;

    ll t=2*n-k+1;
    ll v[t];
    m=0;
    for(i=0;i<k;i++)
        m+=b[i];
    v[0]=m;
    j=1;
    for(i=k;i<2*n;i++)
    {
        m+=b[i]-b[i-k];
        v[j++]=m;
    }

    //for(i=0;i<t;i++)
    //    cout<<v[i]<<" ";
    //cout<<endl;

    //for(i=0;i<t;i++)
    //    cout<<i<<" ";
    //cout<<endl;

    ll fn=2*n-k,in=fn-(n-k);
    for(i=in;i<=fn;i++)
        a.insert(v[i]);

    //for(i=in;i<=fn;i++)
    //    cout<<v[i]<<" ";
    //cout<<endl;

    in--;
    fn--;
    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]=='?')
        {
            itr = a.begin();
            cout<< *itr<<endl;
        }
        else
        {
            if(n==k)
                continue;
            else
            {
                if(v[fn+1]!=v[in])
                {
                    itr=a.find(v[fn+1]);
                    a.erase(itr);
                    a.insert(v[in]);
                }
            }

            //cout<<in<<" "<<fn<<endl;
            //for(i=in;i<=fn;i++)
            //    cout<<v[i]<<" ";
            //cout<<endl;

            in--;
            fn--;

            if(in<0)
            {
                fn=2*n-k-1;
                in=fn-(n-k);
            }
        }
        //cout<<endl;
    }
    a.clear();

    return 0;
}   
