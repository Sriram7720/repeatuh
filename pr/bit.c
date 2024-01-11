#include<stdio.h>

void main(){
    int i,j=0,n,count;
    int a[20],b[20];
    printf("enter the frame length \n");
    scanf("%d",&n);
    printf("enter the frame\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    count = 0;
    for(i=0;i<n;i++){
        if(a[i]==1){
            count++;
            if(count==6){
                b[j] = 0;
                j++;
                b[j] = a[i];
                count = 0;
            }
            else
                b[j] = a[i];
        }
        else
            b[j] = a[i];
    j++;

    }
    printf("\n\n 01111110_");
    for(i=0;i<j;i++)
        printf("%d",b[i]);
    printf("_01111110");

}