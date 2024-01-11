#include<stdio.h>
#include<stdlib.h>
#define B_S 500
#define n 5

void leaky(int *bucket, int op){
    if(*bucket >0 && *bucket > op){
        *bucket = *bucket - op;
        printf("\n outputted %d",op);
    }
    else if(*bucket > 0){
        printf("\n outputted %d",*bucket);
        printf("\n----------------------\n");
        *bucket = 0;
    }
}

void main(){
    int op,newpack,wt,i,oldpack = 0,bucket,j;
    printf("enter the op:\n");
    scanf("%d",&op);
    for(i=0;i<n;i++){
        newpack = rand()%500;
        wt = rand()%5;
        newpack = oldpack + newpack;
        if(newpack < B_S)
            bucket = newpack;
        else{
            printf("\n bucket size exeeded \n");
            bucket = oldpack;
        }
            
        printf("bucket %d \n",bucket);
        printf("wt %d\n",wt);
        for(j=0;j<wt;j++)
            leaky(&bucket,op);
        oldpack = bucket;


    }
    while(bucket>0)
        leaky(&bucket,op);
}