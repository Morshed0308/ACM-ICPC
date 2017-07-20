#include <bits/stdc++.h>

using namespace std;

typedef struct pay{
    char a;
    int num;
}pay;

int main()
{
    int t,n,k;
    long int m=0,sum=0;
    double result=0;
    cin >>t;
    while(t--)
    {
        cin >>k;
        pay ara[k+1];
        for(long int i=0;i<k;i++)
        {
            cin >>ara[i].a;
            cin >>ara[i].num;
        }
        cin >>m;
        char aray[10020];
        for(long int i=0;i<=m;i++)
        {
            gets(aray);
            long int len=strlen(aray);
            for(long int j=0;j<len;j++)
            {
                for(long int x=0;x<k;x++)
                {
                    if(aray[j]==ara[x].a)
                    {
                        sum+=ara[x].num;
                        break;

                    }
                }
            }
        }



        if(sum>0)
        result=(double)sum/100;
        printf("%0.2lf$\n",result);
        result=0,sum=0,k=0,n=0;

    }

}
