#include <stdio.h>
#include <math.h>
int main()
{


    int T;
    scanf("%d",&T);
    int ara[40];
    long long int result=0;

    int i=0,j=0,k=0,temp=0,count=0,x=0,y=0;
    for(i=0;i<T;i++)
    {
        for(j=0;j<40;j++)
        {
            scanf("%d",&ara[j]);
            if(ara[j]==0)break;
            count++;
        }
        for(x=0;x<count-1;x++)
        {
            for(y=0;y<count-x-1;y++)
            {
                if(ara[y]<ara[y+1])
                {
                    temp=ara[y+1];
                    ara[y+1]=ara[y];
                    ara[y]=temp;
                }
            }
        }
        for(x=0;x<count;x++)
        {
            result=result+(pow(ara[x],x+1)*2);


        }
        if(result>5000000)printf("Too expensive\n");
        else
        {
            printf("%lld\n",result);
        }
        result=0;
        count=0;
        temp=0;


    }



    return 0;
}
