#include <bits/stdc++.h>
#define clr(a) memset(ara,0,sizeof(ara);
#define MAX 100000050
using namespace std;

typedef long long int ll;

long unsigned  ara[MAX],stat[MAX],aray[MAX];
ll cnt=0,p=0;


ll sieve(ll num)
{


    ll sqr=sqrt(num);
    for(ll i=3;i<=sqr;i+=2)
    {

        if(stat[i]==0)
        {
            for(ll j=i*i;j<=num;j+=i+i)
            {
                stat[j]=1;
            }


        }
    }
    ll k=1;

    for(ll i=3;i<=num;i+=2)
    {
        if(stat[i]==0)
        {
            ara[k++]=i;
        }
    }
    ara[0]=2;
    p=k-1;


   // return k;
}
//int aray[100000];

int factor(ll num)
{
    ll k=(ll )sqrt(num);
    ll counter=0;
    ll ct=0;

    for(int i=0;ara[i]<=k;i++)
    {
        if(num%ara[i]==0)
        {
            while(num%ara[i]==0)
            {
                cout <<"    "<<ara[i]<<endl;
                num/=ara[i];
            }
            k=(ll)sqrt(num);

        }
    }
    if(num>1){
        cout <<"    "<<num<<endl;
    }
    //return counter;

}




int main()
{
    sieve(100000000);
    ll n,a;
    while(cin >>n)
    {
        if(n<0) break;
        if(n==1)cout <<1<<endl;

      //  printf("    ");
        ll ct=factor(n);
        printf("\n");


    }

}
