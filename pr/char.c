#include<stdio.h>
#include<string.h>

void main(){
    char a[30],b[30];
    int i=0,j=0,n;
    printf("enter the string \n");
    scanf("%s",&a);
    n = strlen(a);
    b[j] = 'd';
    b[j+1] = 'l';
    b[j+2] = 'e';
    b[j+3] = 's';
    b[j+4] = 't';
    b[j+5] = 'x';
    j = j+6;

    while(i<n){
        if((a[i] == 'd') && (a[i+1] == 'l') && (a[i+2] == 'e')){
            b[j] = 'd';
            b[j+1] = 'l';
            b[j+2] = 'e';
            j = j+3;
            
        }
        b[j] = a[i];
        i++;
        j++;
    }

     b[j] = 'd';
    b[j+1] = 'l';
    b[j+2] = 'e';
    b[j+3] = 's';
    b[j+4] = 't';
    b[j+5] = 'x';
    b[j+6] = '\0';

    printf("\n\n %s is the stuffed frame",b);
    

}