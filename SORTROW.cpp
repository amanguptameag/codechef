#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    ll n,i,j,k;
    cin>>n;

    ll a[n][n],m,l;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>a[i][j];

    for(i=0;i<n-1;i++)
    {
        m=0;l=n+1;

        if(a[i][0]<a[i][n-1])
        {
            for(j=0;j<n;j++)
                m++;
        }
        else
        {
            for(j=0;j<n;j++)
                l--;
        }

        if(m==n)
        {
            for(j=1;j<n-1;j++)
            {
                //cout<<a[i][j]<<endl;
                if(a[i][n-1]<a[i][j])
                {
                    if((i!=0) && ((a[i][j]<a[i-1][j-1] && a[i][j]>a[i-1][j+1]) || (a[i][j]>a[i-1][j-1] && a[i][j]<a[i-1][j+1])))
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i-1][j];
                        a[i-1][j]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i-1][j]<<endl;
                    }
                    else if(a[i+1][j]>a[i][j-1] && a[i+1][j]<a[i][n-1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j];
                        a[i+1][j]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i+1][j]<<endl;
                    }
                    else if(a[i+1][j]<a[i][n-1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j];
                        a[i+1][j]=temp;
                        //cout<<"else "<<a[i][j]<<" "<<a[i+1][j]<<endl;
                    }
                    else if(a[i+1][j-1]>a[i][0] && a[i+1][j-1]<a[i][n-1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j-1];
                        a[i+1][j-1]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i+1][j-1]<<endl;
                    }
                    else if(a[i+1][j+1]>a[i][0] && a[i+1][j+1]<a[i][n-1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j+1];
                        a[i+1][j+1]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i+1][j+1]<<endl;
                    }

                }
            }
            sort(a[i],a[i]+n);
        }
        else if(l==1)
        {
            for(j=1;j<n-1;j++)
            {
                //cout<<a[i][j]<<endl;
                if(a[i][0]<a[i][j])
                {
                    if((i!=0) && ((a[i][j]<a[i-1][j-1] && a[i][j]>a[i-1][j+1]) || (a[i][j]>a[i-1][j-1] && a[i][j]<a[i-1][j+1])))
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i-1][j];
                        a[i-1][j]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i-1][j]<<endl;
                    }
                    else if(a[i+1][j]<a[i][0] && a[i+1][j]>a[i][j+1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j];
                        a[i+1][j]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i+1][j]<<endl;
                    }
                    else if(a[i+1][j]<a[i][0])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j];
                        a[i+1][j]=temp;
                        //cout<<"else "<<a[i][j]<<" "<<a[i+1][j]<<endl;
                    }
                    else if(a[i+1][j-1]<a[i][0] && a[i+1][j-1]>a[i][n-1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j-1];
                        a[i+1][j-1]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i+1][j-1]<<endl;
                    }
                    else if(a[i+1][j+1]<a[i][0] && a[i+1][j+1]>a[i][n-1])
                    {
                        ll temp=a[i][j];
                        a[i][j]=a[i+1][j+1];
                        a[i+1][j+1]=temp;
                        //cout<<"if "<<a[i][j]<<" "<<a[i+1][j+1]<<endl;
                    }
                }
            }
            sort(a[i],a[i]+n,greater<int>());
        }
    }

    if(a[n-1][0]<a[n-1][n-1])
        sort(a[n-1],a[n-1]+n);
    else
        sort(a[n-1],a[n-1]+n,greater<int>());

    //cout<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}   
