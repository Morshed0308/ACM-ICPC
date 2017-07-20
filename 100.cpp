#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>

using namespace std;


int  cycle(long long int n)
{
    int ct=1;
    while(n>1)
    {


        if(n%2==1)
        {
            n=3*n+1;

        }
        else
        {
            n=n/2;

        }
        ct++;

    }
    return ct;


}
int main()
{
    long long  int i,a,b,x,y,temp=0,counter=0;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a>b)
        {
            x=b,y=a;
        }
        else{
            x=a,y=b;
        }
        counter=1;
        for(i=x;i<=y;i++)
        {
            temp=cycle(i);
            if(temp>counter)
            {
                counter=temp;
            }
        }
        printf("%lld %lld %lld\n",a,b,counter);


    }
    return 0;
}
