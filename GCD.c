#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b;
    int t;
    scanf("%d",&t);
    while(t--)
        {
            scanf("%lld %lld",&a,&b);
    if(b%a==0)
        {
            printf("%lld %lld\n",a,b);
        }
    else{
        printf("%d\n",-1);
    }





        }
    return 0;
}

