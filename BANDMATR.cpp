#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll x,a=0,i,j,m,k=-1,p;
        m=n*n;
        p=n;

        while(m--)
        {
            cin>>x;
            if(x==1)
                a++;
        }

        //cout<<"a="<<a<<" k="<<k<<" n="<<n<<endl;
        for(i=1;i<=n;i++)
        {
            if(a==0)
            {
                k=0;
                break;
            }
            else if(a==n*n)
            {
                k=n-1;
                break;
            }
            else
            {
                if(i==1)
                {
                    if(a>p)
                    {
                        a=a-p;
                        k++;
                        p--;
                        //cout<<"a="<<a<<" k="<<k<<" p="<<p<<endl;
                    }
                    else
                    {
                        k=0;
                        //cout<<" k="<<k<<" break"<<endl;
                        break;
                    }
                }
                else
                {
                    if(a>2*p)
                    {
                        a=a-2*p;
                        k++;
                        p--;
                        //cout<<"a="<<a<<" k="<<k<<" p="<<p<<endl;
                    }
                    else
                    {
                        k++;
                        //cout<<" k="<<k<<" break"<<endl;
                        break;
                    }

                }
            }
        }

        cout<<k<<endl;

    }

    return 0;
}
