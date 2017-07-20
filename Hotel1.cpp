#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,d,sum,i;
    while(scanf("%lld %lld",&s,&d)==2)
    {
        sum=0;
        i=s;
        do{

            sum+=i;
            i++;
        }
        while(sum<d);

        printf("%lld\n",i-1);
    }
    return 0;
}
