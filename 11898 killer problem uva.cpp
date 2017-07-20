
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,Q,temp;
    cin >>T;
    while(T--){
            cin >>N;
        int ara[N+10];
        for(int i=1;i<=N;i++)
         {
            scanf("%d",&ara[i]);// >>ara[i];
         }
        scanf("%d",&Q);
    int a,b,counter=0;
    while(Q--)
    {
        scanf("%d %d",&a,&b);// >>a>>b;
       int counter=ara[a+1]-ara[a];
        if(counter<0){
            counter=counter*(-1);
            }
       // cout <<counter<<endl;

        for(int i=a;i<=b;i++)
        {
            for(int j=i+1;j<=b;j++)
            {
                temp=ara[i]-ara[j];
                if(temp<0)
               {

                    temp*=-1;
               }

                counter=min(temp,counter);
                if(counter==0)break;

            }
            if(counter==0)break;
        }
        cout <<counter<<endl;

    }


}

}
