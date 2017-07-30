//
//  main.cpp
//  UVA558
//
//  Created by Shahriar Hossain Morshed on 7/31/17.
//  Copyright © 2017 Shahriar Hossain Morshed. All rights reserved.
//

#include <iostream>




using namespace std;
#define SZ 1e8




struct edge
{
    int u,v,w;
}e[2010];


int main() {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    
    
    int tc,check=0;
    scanf("%d",&tc);
    for (int i=0; i<tc;i++) {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int j=0;j<m;j++)
        {
            scanf("%d %d %d",&e[j].u,&e[j].v,&e[j].w);
        }
        int distance[1020];
        for(int j=0;j<n;j++)
            distance[j]=SZ;
        
        
        distance[0]=0;
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(distance[e[k].u]+e[k].w<distance[e[k].v])
                    distance[e[k].v]=distance[e[k].u]+e[k].w;
            }
        }
        for(int j=0;j<m;j++)
        {
            if(distance[e[j].u]+e[j].w<distance[e[j].v])
            {
                check=1;
                break;
            }
            
        }
        if (check) {
            printf("possible\n");
            
        }
        else printf("not possible\n");
        check=0;
        
        
        
    }
    return 0;
}
