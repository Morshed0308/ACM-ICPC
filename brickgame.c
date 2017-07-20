#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test,cs=0,N,j,max=0;
    scanf("%d",&test);

    if(test<=100){
        while(test--){
            scanf("%d",&N);
            int ara[N];

            if(N%2==1){
                if(N>1&&N<11){

        for(j=0;j<N;j++){
            scanf("%d",&ara[j]);
        }
        max=N/2;
        cs++;
        printf("Case %d: %d\n",cs,ara[max]);
        max=0;
                  }
              }
           }
    }

}
