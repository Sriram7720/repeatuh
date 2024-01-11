#include<stdio.h>
#include<string.h>
#define N strlen(g)
int a,i,j;
char t[28],cs[28],g[17] = "10010000000000001";

void xor(){
    for(j=1;j<N;j++)
        cs[j] = ((cs[j]==g[j])?'0':'1');
}

void crc(){
    for(i=0;i<N;i++){
        cs[i] = t[i];
    }
    do{
        if(cs[0]=='1')
            xor();
        for(j=0;j<N-1;j++)
            cs[j] = cs[j+1];
        cs[j] = t[i++];
    }while(i<=a+N-1);
}

void main(){
    printf("enter the data to be sent\n");
    scanf("%s",&t);
    a = strlen(t);
    for(i=a;i<a+N-1;i++){
        t[i] = '0';
    }
    crc();
    for(i=a;i<a+N-1;i++)
        t[i] = cs[i-a];
    printf("codeword %s",t);

    printf("\nthe data recieved:");
    scanf("%s",&t);

    crc();

    for(i=0;(i<N-1 && cs[i]!='1');i++);
    if(i<N-1)
        printf("error found");
    else
        printf("error free");
}