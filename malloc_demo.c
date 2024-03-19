#include<stdio.h>
#include<stdlib.h>

void main(){
    int n=5;

    int* buffer=(int*)malloc(sizeof(int)*n);

    //buffer[0]=30;
    //buffer[1]=23;
    
    *(buffer+0)=40;
    *(buffer+1)=45;

    printf("%d\t\t %d\n\n",buffer[0],buffer[1]);
}