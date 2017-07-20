#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,c=1,cs=0,count=0;
    while(scanf("%d",&a))
    {
        if(a<0)break;

        while(c<a)
        {
            c+=c;
            count++;

        }
        if(a-c>0)count++;
        printf("Case %d: %d\n",++cs,count);
        count=0;
        c=1;


    }
    return 0;

}
