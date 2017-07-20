



#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counter=0;

    string a;
    while(getline(cin,a))
    {
        int len=a.size();
        for(int i=0;i<len;i++)
        {
            if(a[i]=='"'&&counter==0)
            {
                counter=1;

                printf("``");
                continue;

            }
            if(a[i]=='"'&&counter==1){
                    counter=0;
                    printf("''");
                    continue;
            }

            printf("%c",a[i]);
        }
        puts("");

    }
}
