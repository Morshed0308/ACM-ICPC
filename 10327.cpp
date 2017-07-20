





#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
     int ara[1000+2];
    while(scanf("%d",&n)==1)
    {

        for(int i=0;i<n;i++)
        {

            cin >>ara[i];
        }
        int ct=0;
        for(int i=1;i<n;i++)
        {
            for(int j=n-1;j>=i;j--)
            {
                if(ara[j-1]>ara[j])
                {
                    int tmp=ara[j-1];
                    ara[j-1]=ara[j];
                    ara[j]=tmp;
                    ct++;
                }
            }
        }
        cout <<"Minimum exchange operations : "<<ct<<endl;
    }
    return 0;
}
