#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,result=0;
    while(scanf("%d %d",&a,&b)==2){
        if(a==-1&&b==-1)break;
        if(abs(a-b)<=49){
                printf("%d\n",abs(a-b));

        }
        else{
            result=abs(a-b);
            result=abs(result-50);
            result=abs(result-49);
            printf("%d\n",result+1);
        }
    }
    return 0;
}
