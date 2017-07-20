#include <cstdio>
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    int t,wafa=0,j=0;
    double counts=0;
    int ara[7];
    cin >>t;


    while(t--)
    {
        int t1,t2,f,a,ct1,ct2,ct3;
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);

        if(ct1>=ct2 && ct3>=ct2)counts=(ct1+ct3)/2;
        else if(ct2>=ct1 && ct3>=ct1)counts=(ct2+ct3)/2;
        else if(ct2>=ct3 && ct1>=ct3)counts=(ct1+ct2)/2;

        wafa=t1+t2+f+a+counts;




        if(wafa>=90)printf("Case %d: A\n",++j);

        else if(wafa>=80&&wafa<90)
        {
                printf("Case %d: B\n",++j);
        }

        else if(wafa>=70&&wafa<80)printf("Case %d: C\n",++j);

        else if(wafa>=60&&wafa<70)printf("Case %d: D\n",++j);

        else printf("Case %d: F\n",++j);
        wafa=0;
        counts=0;




    }
    return 0;
}
