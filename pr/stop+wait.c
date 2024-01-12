#include<stdio.h>
#include<stdlib.h>
#define RTT 4
#define TOT_F 7
#define tm 4
enum {YES,NO} ack;
void main(){
    int wt,i=1;
    ack = YES;
    while(i<=TOT_F){
        if(i!=1 && ack == YES){
            printf("\n %d ",i);
            printf("\n ack for frame %d is recvd",i-1);
            printf("\n ----------------------------- \n");
        }
        printf("\nsending frame %d",i);
        ack = NO;
        wt = rand()%4+1;
        if(wt == tm)
            printf("\nack not recieved resending the frame");
        else{
            //sleep(RTT);
            printf("frame %d recived",i);
            ack = YES;
            i++;
        }

    }
}