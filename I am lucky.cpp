#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;
struct info
{
    char ara[150];
    int num;
}name[110][110];
int main()
{
    int t;
    while(scanf("%d",&t)==1){
    int mx=0;
    int a,b;
    for(int k=0;k<t;k++)
    {
        for(int i=0;i<10;i++)
        {
            scanf("%s %d",&name[k][i].ara, &name[k][i].num);
        }


        for(int j=0;j<10;j++)
        {
            if(name[k][j].num>=mx){
                mx=name[k][j].num;
                a=k,b=j;

            }

        }
        int ct=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(name[i][j].num==mx){
                        ct++;
                if(ct==1)printf("Case #%d:\n",i+1);

                    printf("%s\n",name[i][j].ara);
                }
            }
            ct=0;
        }
        // printf("Case #i:\n%s",name[a][b].ara);
        mx=0;
    }
    }

    return 0;

}
