#include<stdio.h>
#include<stdlib.h>
#define RTT 5

void main(){
    int frames[50],ws,f,i;
    printf("enter the window size");
    scanf("%d",&ws);
    printf("\n enter the number of frames");
    scanf("%d",&f);
    printf("\n enter the frames");
    for(i=1;i<=f;i++)
        scanf("%d",&frames[i]);
    for(i=1;i<=f;i++){
        if(i%ws != 0){
            printf("\n %d \t",frames[i]);
        }
        else{
            printf("%d",frames[i]);
            printf("\nframes are sent");
            printf("\n waiting for ack \n ack received \n waiting for the next frame \n");
            //sleep(RTT);
        }
    }
    if(f%ws != 0){
        
            printf("\nframes are sent");
            printf("\n waiting for ack \n ack received \n ");
    }
}