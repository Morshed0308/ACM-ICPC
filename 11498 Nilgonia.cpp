#include <iostream>
#include <stdio.h>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int T;
    int a,b;

    while(scanf("%d",&T)==1)
    {
        if(T==0)break;

        cin>>a>>b;
        vector< int >ara;

        for(int i=0;i<(2*T);i++)
        {
            int c;
            cin >>c;
            ara.push_back(c);

        }
        for(int i=0;i<ara.size();i+=2){

            if(ara[i]==a||ara[i+1]==b)
            {
                cout <<"divisa\n";
                continue;
            }
            else if(ara[i]>a){
                if(ara[i+1]>b)cout <<"NE\n";

                else cout <<"SE\n";
            }
            else if(ara[i]<a){
                if(ara[i+1]>b)cout <<"NO\n";

                else cout <<"SO\n";
            }
        }

    }
    return 0;
}
