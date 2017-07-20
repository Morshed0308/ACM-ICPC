#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int N;
    while(scanf("%d",&N)&&N){
    long long int mx=0,ct=0,sum=0;
    for(int i=0;i<N;i++)
    {
        cin >>ct;
        sum+=ct;

        if(sum>mx)mx=sum;

        else if(sum<0)sum=0;
    }
    if(sum>0)
    {
        cout <<"The maximum winning streak is "<<mx<<".\n";
    }
    else cout <<"Losing streak.\n";
    }
    return 0;

}

