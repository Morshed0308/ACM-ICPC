#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


int main()
{
    int i;
    char ara[12];
    int j=0;
    int rt=0;
    while(1){
            scanf("%s",ara);
            long ct=0;
            int len=strlen(ara);
            for(i=0;i<len;i++){
                    ct+=(ara[i]-48);
                }
                if(ct==0)break;
             while(ct>=10){
                rt=ct%10;
                ct=ct-rt;
                rt+=(ct/10);
                ct=rt;
             }
             if(ct<10){
                printf("%d\n",ct);
                continue;
             }
             printf("%d\n",ct);
             rt=0;


    }
    return 0;
}

