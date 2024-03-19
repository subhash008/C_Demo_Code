#include<stdio.h>

void main(){

    int arr[5000];
    static int count=0;
    count++;
    printf("Count : %d \n",count);
    main();
}