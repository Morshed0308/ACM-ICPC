#include <stdio.h>
#include <math.h>

long long square(long long  x)
{
    return x*x*x;
}



int main()
{
    long long int a=0,result=0;
    while(scanf("%lld",&a)==1)
    {
        while(a>0)
        {
            result+=square(a);
            a--;
        }
        printf("%lld\n",result);
        result=0;
        a=0;
    }
    return 0;
}
