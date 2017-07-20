#include <bits/stdc++.h>
#define clr(a) memset(ara,0,sizeof(ara);
#define MAX 1000000
using namespace std;

typedef long long int ll;

int  ara[MAX],stat[MAX];
int p=0;


int sieve(ll num)
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
    int k=1;

    for(ll i=3;i<=num;i+=2)
    {
        if(stat[i]==0)
        {
            ara[k++]=i;

        }




    }
    ara[0]=2;
    p=k-1;

}
//int aray[100000];



int main()
{

    ll i=0,num=0,a=0,b=0,high=0,low=0,temp=0;
    sieve(1000010);
    while(cin >>num)
    {
        high=0,low=0;
        if(num==0) break;

        for(int i=0;i<=num;i++)
        {
            if(ara[i]<=num)
            {
                high=i;
            }
            else break;
        }



        while(high>=low)
        {
             if(ara[high]+ara[low]>num) high--;

            else if (ara[high]+ara[low]<num) low++;

            else {
                    printf("%lld:\n%d+%d\n",num,ara[low],ara[high]);
                    break;
            }

        }
        if(high<low){
            printf("%lld:\nNO WAY!\n",num);
        }

    }
    return 0;

}
