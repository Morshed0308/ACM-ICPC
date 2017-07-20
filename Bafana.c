#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,a,b,c,count=0;
    scanf("%d",&T);
    int i,j,k;
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        j=b;
        while(1){

                j++;
                count++;
                if(j>a){
                    j=1;
                }
            if(count==c){
             k=j;
             break;

            }



        }

        printf("Case %d: %d\n",i,k);

        count=0;
    }
}
