#include <bits/stdc++.h>

using namespace std;


int main()
{
    string ara;
    int i=1;

    while(cin >>ara)
    {
        if(ara=="HELLO"){
                printf("Case %d: ENGLISH\n",i++);

        }
        else if(ara=="HOLA"){
                printf("Case %d: SPANISH\n",i++);

        }
        else if(ara=="HALLO"){
                printf("Case %d: GERMAN\n",i++);

        }
        else if(ara=="CIAO"){
                printf("Case %d: ITALIAN\n",i++);

        }
        else if(ara=="ZDRAVSTVUJTE"){
                printf("Case %d: RUSSIAN\n",i++);

        }
        else if(ara=="BONJOUR"){
            printf("Case %d: FRENCH\n",i++);
        }
        else if(ara=="#"){
            break;
        }
        else{
            printf("Case %d: UNKNOWN\n",i++);
        }
    }


}
// HOLA
//HALLO
//BONJOUR
//CIAO
//ZDRAVSTVUJTE
