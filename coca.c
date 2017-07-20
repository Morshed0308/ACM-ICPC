#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t=10,count=0,n;
    while(t--){
        scanf("%d",&n);
        if(n==0) break;
        else{

            while(n>=3){
                n=n-3;
                count++;
                n+=1;
            }
            if(n==2){
                count++;
            }

            printf("%d\n",count);
            count=0;

        }
    }
}
