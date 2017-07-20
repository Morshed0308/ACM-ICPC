#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    freopen("Check","r",stdin);
    freopen("output","w",stdout);
    int t,a;

    while(scanf("%d",&t)&&t!=0){
            vector <int> ara;

    while(t--)
    {
        cin >>a;

        if(a)ara.push_back(a);

    }
    if(ara.size()==0){

        cout <<"0\n";
        continue;
    }

    for(int i=0;i<ara.size();i++)
    {
        cout <<ara[i];
        if(i!=ara.size()-1)cout <<" ";
    }
    puts("");
    }

    return 0;
}
