


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int s,n;
        cin >>s>>n;

        if(s<n){
            printf("impossible\n");
            continue;
        }
        int counter=0,result=0;

        counter=(s-n)/2;
        if(n+counter-(s-(n+counter))==n){
        printf("%d %d\n",n+counter,(s-(n+counter)));

        continue;
        }
        printf("impossible\n");



    }
}
