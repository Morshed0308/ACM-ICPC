#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n;
    int result;

    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        result=((((((n*567)/9)+7492)*235)/47)-498);
        printf("%ld\n",abs(result/10)%10);
    }
    return 0;
}
