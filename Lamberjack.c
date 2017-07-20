#include <stdio.h>

int main()
{
    int i,N,count=0,counts=0,l,j=0;

    scanf("%d",&N);
    int ara[N][10];
        for(i=0;i<N;i++)
        {
            for(j=0;j<10;j++)
            {
                scanf("%d",&ara[i][j]);

            }

        }
        printf("Lumberjacks:\n");
        for(i=0;i<N;i++)
        {
            if(ara[i][0]>ara[i][1])
            {
                for(j=0;j<10;j++)
                {
                    if(ara[i][j]>ara[i][j+1])
                    {
                        count++;
                        if(count==9)
                        {
                            printf("Ordered\n");
                            count=0;
                            break;
                        }
                    }
                    else if(ara[i][j]<ara[i][j+1])
                    {
                        printf("Unordered\n");
                        count=0;
                        break;
                    }

                }
            }
            else if(ara[i][0]<ara[i][1])
            {
                for(j=0;j<10;j++)
                {
                    if(ara[i][j]<ara[i][j+1])
                    {
                        counts++;
                        if(counts==9)
                        {
                            printf("Ordered\n");
                            counts=0;
                            break;
                        }
                    }
                    else if(ara[i][j]>ara[i][j+1])
                    {
                        printf("Unordered\n");
                        counts=0;
                        break;
                    }
                }
            }
        }
    return 0;
}
