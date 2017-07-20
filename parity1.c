#include <stdio.h>
#include <stdlib.h>
int ara[50];
int main()
{
    long long int  N,l,H;
    int i,j=0;
    int count=0,sum=0;
        scanf("%lld",&N);
        while(N!=0){
            H=N;
            for(j=0;N!=0;j++){
            ara[j]=N%2;
            N=N/2;
            count++;
                }
                l=0;

            for(j=count-1;j>=0;j--){
                sum+=ara[j];
                l++;
                if(l==1){
                printf("The parity of ");
                }
                    printf("%d",ara[j]);
                }

            printf(" is %d (mod 2).\n",sum);
            sum=0;
            count=0;
            scanf("%lld",&N);
            }
}
