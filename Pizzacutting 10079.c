#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int N,i,result=0;

    while(scanf("%lld",&N))
    {
        if(N<0)
        break;
        for(i=N;i>0;i--)
        {
            result=result+i;
        }
        printf("%lld\n",result+1);
        result=0;

    }

    return 0;
}
