#include<stdio.h>
#define MAX 10
#define startnode 0
#define infinity 99

void dijsktra(int cost[MAX][MAX], int n);

void main(){
    int i,j,n;
    int cost[MAX][MAX];
    printf("enter the no of vertices\n");
    scanf("%d",&n);
    printf("enter the cost mat\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&cost[i][j]);
    
    dijsktra(cost,n);
}

void dijsktra(int cost[MAX][MAX],int n){
    int dist[MAX],min_distance,i,j,next,count;
    int pred[MAX],visited[MAX];

    for(i=0;i<n;i++){
        dist[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }

    dist[startnode] = 0;
    visited[startnode] = 1;
    count = 1;

    while(count<n-1){
        min_distance = infinity;
        for(i=0;i<n;i++){
            if(dist[i]<min_distance && !visited[i]){
                min_distance = dist[i];
                next = i;
            }
        }
        visited[next] = 1;
        for(i=0;i<n;i++)
            if(!visited[i])
                if(min_distance+cost[next][i]<dist[i]){
                    dist[i] = min_distance+cost[next][i];
                    pred[i] = next;
                }
        count++;
    }
    for(i=0;i<n;i++)
        if(i != startnode){
            printf("\nthe distance of node %d from node %d is : %d \n",i,startnode,dist[i]);
            printf("via %d",i);
            j=i;
            do{
                j = pred[j];
                printf("<-%d",j);
            }while(j!=startnode);
        }
    
}