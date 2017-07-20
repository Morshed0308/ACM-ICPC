#include <cstdio>
using namespace std;



int main()
{
    int i;
    int a,b;
    unsigned long long result=1;
    while(scanf("%d %d",&a,&b)==2){
            if(a==0&&b==0)break;
            if(b>a/2)b=a-b;

            for(i=0;i<b;i++){
                result*=(a-i);
                result/=(i+1);
            }

        printf("%llu\n",result);

       result=1;

    }


    return 0;

}
