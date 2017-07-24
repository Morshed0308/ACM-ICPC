

#include <iostream>
#include <cstdio>
#include <cstring>

#define FOR(A,B) for(int A=0;A<B;i++)
#define SZ 1000000
using namespace std;
int aray[100][30];


int main() {

    int n,m,tc=0;
    char name[50][50];
    while (cin >>n>>m)
    {
        if(n==0&&m==0) break;

        for(int i=0;i<=n;i++)
        {
            aray[i][i]=0;
            for(int j=0;j<=n;j++)
            {
                aray[i][j]=aray[j][i]=SZ;
            }
        }



        FOR(i,n)
        {
            scanf("%s",name[i]);
        }
        int temp,tmp,val;
        FOR(i,m)
        {
            cin >>temp>>tmp>>val;
            aray[temp][tmp]=val;
            aray[tmp][temp]=val;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                for(int k=1;k<=n;k++)
                {
                    aray[j][k]=min(aray[j][k],aray[j][i]+aray[i][k]);

                }
            }
        }


        int mn=SZ,res=0,ans=0;
        for(int i=1;i<=n;i++)
        {
            res=0;
            for (int j=1; j<=n; j++) {
                res+=aray[i][j];
            }
            if(res<mn)
            {
                mn=res;
                ans=i;
            }

        }
        ans--;
        printf("Case #%d : %s\n",++tc,name[ans]);

    }




    return 0;
}
