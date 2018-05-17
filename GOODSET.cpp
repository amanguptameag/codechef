#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;

        vector <int> a;
        vector <int>::iterator it;
        int i,j;

        if(n==1)
            cout<<"1"<<endl;
        else if(n==2)
            cout<<"1 2"<<endl;
        else
        {
            a.push_back(1);
            a.push_back(2);
            int k=3;

            while(a.size()!=n)
            {
                int p=0;
                for(i=0;i<=a.size();i++)
                {
                    for(j=0;j<=a.size();j++)
                    {
                        if(i!=j)
                        {
                            if(k==a[i]+a[j])
                            {
                                p=1;
                                break;
                            }
                        }
                    }
                    if(p==1)
                        break;
                }
                if(p==0)
                    a.push_back(k);
                k++;
            }
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}   
