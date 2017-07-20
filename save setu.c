#include <stdio.h>
#include <string.h>
int main()
{
    int t,n;
    unsigned a;
    int j,count=0;
    scanf("%d",&n);
    scanf("%d",&t);
    char ara[8];
    while(n--){
    for(j=1;j<=t;j++){
                scanf("%s",ara);
            if(strcmp(ara,"donate")==0){
                scanf("%u",&a);
                count+=a;
                }
              else if(strcmp(ara,"report")==0){
                    printf("%d\n",count);

                }

            }
        }
        return 0;

}

