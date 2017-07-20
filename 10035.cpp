#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
        long long int a,b;
       long  int carry=0,temp=0,temp2=0,counter=0;
        while(scanf("%lld %lld",&a,&b)==2)
        {
                if(a==0&&b==0)break;

                counter=0;
              while(1)
              {
                temp=a%10;
                temp2=b%10;
                if(temp+temp2>=10)
                {
                        carry++;
                        counter=1;
                }
                else if(counter==1 && temp+temp2==9)
                {
                        carry++;

                }
                else counter=0;

                a=a-temp;
                b=b-temp2;

                a=a/10;
                b=b/10;
                if(a==0&&b==0)break;

                }

                if(carry>1) cout <<carry<<" carry operations.\n";

                else if(carry==1) cout <<carry<<" carry operation.\n";

                else cout <<"No carry operation.\n";

                carry=0;
        }

}


