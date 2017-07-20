#include <bits/stdc++.h>

using namespace std;

int main()
{
   int c;
   cin >>c;
   long long int counter=0,res=0;
   while(c--)
   {
       int temp,t;
       cin  >>t;
       vector <int> ara;
       for(int i=0;i<t;i++)
       {
           cin >>temp;
           counter+=temp;
           ara.push_back(temp);

       }
       counter=(counter/t);

       for(int i=0;i<t;i++)
       {
           if(ara[i]>counter)
           {
               res++;

           }
       }
       double result=(100.0*res)/t;

       printf("%.3lf%%\n",result);
       counter=0;
       result=0,res=0;
   }
}
