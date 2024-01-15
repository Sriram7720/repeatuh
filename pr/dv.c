#include<stdio.h>

struct node{
    unsigned dist[20];
    unsigned from[20];
}rt[10];

void main(){
    int i,j,k,nodes,count;
    int costmat[20][20];
    printf("enter tehe number of nodes\n");
    scanf("%d",&nodes);
    printf("enter the cost matrix\n");
    for(i=0;i<nodes;i++)
        for(j=0;j<nodes;j++){
            scanf("%d",&costmat[i][j]);
            costmat[i][i] = 0;
            rt[i].dist[j] = costmat[i][j];
            rt[i].from[j] = j;
            
        }

    do{
        count = 0;
        for(i=0;i<nodes;i++)
            for(j=0;j<nodes;j++)
                if(i!=j)
                    for(k=0;k<nodes;k++)
                        if(rt[i].dist[j] > rt[i].dist[k]+rt[k].dist[j]){
                            rt[i].dist[j] = rt[i].dist[k]+rt[k].dist[j];
                            rt[i].dist[j] = rt[i].dist[k];
                            
count++                        }
    }while(count != 0);
    for(i=0;i<nodes;i++){
        printf("\n\nfor node %d", i+1);
            for(j=0;j<nodes;j++)
                 printf("\n\n %d via %d distance %d \n\n",j+1,rt[i].from[j]+1,rt[i].dist[j]);

    }

}
