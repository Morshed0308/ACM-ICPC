#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int h1,m1,h2,m2;
    while(cin >>h1>>m1>>h2>>m2)
    {
        int res=0;
        if(h1==0&&m2==0&&h2==0&&m2==0) break;


        if(h1<13&&h2<13)
        {
            h1=(h1*60)+m1;
            h2=(h2*60)+m2;
            res=h2-h1;
            if(res<0) res=(1440+res);

            cout <<res<<endl;
            continue;
        }
        int yr=abs(h2-h1);
        if(yr>=12)
        {
            if(h1>12) h1=h1-12;
            else if(h2>12) h2-=12;

            h1=h1*60;
            h1=h1+m1;
            h2=h2*60;
            h2=h2+m2;
            res=h2-h1;
            res=res+720;
            cout <<res<<endl;
            continue;
        }
        yr=abs(h2-h1);
        if(yr<12){
            h2=(h2*60)+m2;
            h1=(h1*60)+m1;
            res=h2-h1;
            if(res<0)res=1440+res;

            cout <<res<<endl;
        }



    }

}
