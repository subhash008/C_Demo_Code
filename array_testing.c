#include<stdio.h>

void main(){

    int num[10];
    printf("Size of the array : %ld \n\n", sizeof(num)/sizeof(int));

    for(int i=0;i<10;i++)
        printf("\nElemnt : %d \n",num[i]);

}