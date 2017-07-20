#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ara[100];
    int i,j=0;
    while(gets(ara)){
    int len=strlen(ara);
    for(i=0;i<len;i++){
        if(ara[i]=='A'||ara[i]=='B'||ara[i]=='C'){
            ara[i]=2;
        }
        else if(ara[i]=='D'||ara[i]=='E'||ara[i]=='F'){
            ara[i]=3;
        }
        else if(ara[i]=='G'||ara[i]=='H'||ara[i]=='I'){
            ara[i]=4;
        }
        else if(ara[i]=='J'||ara[i]=='K'||ara[i]=='L'){
            ara[i]=5;
        }
        else if(ara[i]=='M'||ara[i]=='N'||ara[i]=='O'){
            ara[i]=6;
        }
        else if(ara[i]=='P'||ara[i]=='Q'||ara[i]=='R'||ara[i]=='S'){
            ara[i]=7;
        }
        else if(ara[i]=='T'||ara[i]=='U'||ara[i]=='V'){
            ara[i]=8;
        }
        else if(ara[i]=='W'||ara[i]=='X'||ara[i]=='Y'||ara[i]=='Z'){
            ara[i]=9;
            }
    }
     for(i=0;i<len;i++)
        {
            if(ara[i]=='0'||ara[i]=='1'||ara[i]=='2'||ara[i]=='3'||ara[i]=='4'||ara[i]=='5'||ara[i]=='6'||ara[i]=='7'||ara[i]=='8'||ara[i]=='9'||ara[i]=='-')
            {
                printf("%c",ara[i]);
            }
            else
                {
                    printf("%d",ara[i]);
                }

        }
        printf("\n");
    }

    return 0;
}
