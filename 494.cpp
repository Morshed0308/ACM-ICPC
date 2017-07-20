#include <stdio.h>
#include <string>
#include <string.h>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    char ara[1000];
    int counter=0,temp=0;


    while(gets(ara))
    {
        int len=strlen(ara);
        for(int i=0;i<len;i++)
        {
            if((ara[i]>=65 &&ara[i]<=90)||(ara[i]>=97 &&ara[i]<=122))
            {
                temp=1;

            }
            else
            {
                counter=counter+temp;
                temp=0;
            }
        }
        cout <<counter<<endl;
        counter=0,temp=0;


    }
}
