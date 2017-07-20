#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,N;
    scanf("%d",&T);
    int cs=0,i;
    while(T--)
    {
        scanf("%d",&N);
        int ara[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&ara[i]);

        }
        int max=0;
        for(i=0;i<N;i++)
        {
            if(max<ara[i])
            {
                max=ara[i];
            }
        }
        printf("Case %d: %d\n",++cs,max);
        max=0;
    }
    return 0;
}
