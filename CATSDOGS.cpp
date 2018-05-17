#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main()
{
	ll t,c,d,l;
	cin>>t;

	while(t--)
	{
		cin>>c>>d>>l;

        if(l%4!=0)
        	cout<<"no"<<endl;

        else if((c==0)&&(d==0)&&(l==0))
            cout<<"yes"<<endl;

        else if(((c==0)&&(l==4*d))||((d==0)&&(l==4*c)))
            cout<<"yes"<<endl;

        else if(d>=c)
        {
            if((l<=(4*c+4*d)) && (l>=4*d))
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }

        else if(d<c)
        {
            if(2*d>=c && l<=(4*c+4*d) && l>=4*d)
            {
                cout<<"yes"<<endl;
            }

            else if(2*d<=c && l<=(4*c+4*d) && (l>=4*((c-2*d)+d)))
            {
                cout<<"yes"<<endl;
            }
            else
                cout<<"no"<<endl;
        }
        else
            cout<<"no"<<endl;
   	}

   	return 0;
}
