#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,count,c=0;
    while(scanf("%d %d",&n,&k)==2){
        count=n;
        while(n>=k){
        count=count+(n/k);
        n=(n/k)+(n%k);
        }
        printf("%d\n",count);
    }
    return 0;
}
