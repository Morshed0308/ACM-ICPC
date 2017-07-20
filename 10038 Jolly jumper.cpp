#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    int tc,n;
    while(scanf("%d",&tc)==1){
    int ara[tc];
    for(int i=0;i<tc;i++)
    {
        scanf("%d",&ara[i]);

    }
    long long result=abs(ara[0]-ara[1]);
    if(abs(ara[1]-ara[2])==result-1){
        for(int i=1;i<tc-1;i++)
        {
            if(abs(ara[i]-ara[i+1])==--result)
            {
                if(i==tc-2)
                {
                    cout <<"Jolly\n";
                }
                continue;

        }
        cout <<"Not jolly\n";
        break;
        }
    }
     else if(abs(ara[1]-ara[2])==result+1){
        for(int i=1;i<tc-1;i++)
        {
            if(abs(ara[i]-ara[i+1])==++result)
            {
                if(i==tc-2)
                {
                    cout <<"Jolly\n";
                }
                continue;

        }
        cout <<"Not jolly\n";
        break;
        }
    }
    else cout <<"Not jolly\n";
    }
    return 0;
}
