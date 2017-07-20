
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll res=0;
ll factor(ll b,ll p,ll m)
{

    if(p==0) return 1;
    else if(p%2==0){
        ll res=factor(b,p/2,m);
        return ((res%m)*(res%m))%m;
    }
    else return ((factor(b,p-1,m)%m)*(b%m))%m;
}


int main()
{
    ll b,p,m;
    while(cin >>b>>p>>m)
    {
        ll res=factor(b,p,m);
        cout <<res<<endl;
    }
}
