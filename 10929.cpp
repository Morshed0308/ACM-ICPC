#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char ara[1010];
    while(1){
            scanf("%s",ara);
            long ct=0;
            int len=strlen(ara);
            if(ara[ct]=='0'&&len==1)break;
            for(i=0;i<len;i++){
                    ct=(ct*10)+(ara[i]-48);
                    ct=ct%11;
                    }
    if(ct==0){
         printf("%s is a multiple of 11.\n",ara);
    }
    else printf("%s is not a multiple of 11.\n",ara);
    }

    return 0;

}
