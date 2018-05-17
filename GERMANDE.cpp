#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <algorithm>
#define ll long long int
using namespace std;

struct node
{
 ll data;
 struct node *next;
}*last=NULL;

void create()
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));

 scanf("%lld",&newnode->data);

 if(last==NULL)
 {
    last=newnode;
    newnode->next=newnode;
 }
 else
 {
    newnode->next=last->next;
    last->next=newnode;
    last=last->next;
 }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,i,j,k,r;
        cin>>a>>b;
        n=a*b;
        for(i=1;i<=n;i++)
            create();

        struct node *p,*q;
        ll l,m,u,v;

        p=last;
        for(j=1;j<=b;j++)
        {
            u=0,v=0;
            for(k=1;k<=a;k++)
            {
                l=0,m=0;
                for(i=1;i<=b;i++)
                {
                    if(p->data==1)
                        m++;
                    else
                        l++;
                    p=p->next;

                    if(m>=(b+1)/2 || l>=(b+1)/2)
                    {
                        for(r=1;r<=b-(m+l);r++)
                            p=p->next;
                        break;
                    }
                }
                if(m>l)
                    v++;
                else
                    u++;

                if(v>=(a+1)/2 || u>=(a+1)/2)
                    break;

            }

            if(v>u)
                break;
            else
                p=p->next;

            if(j>100)
                break;
        }

        if(v>u)
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;

        last=NULL;
    }
    return 0;
}
Submission Info:
