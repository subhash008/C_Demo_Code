#include<stdio.h>
int add(int arr[]){

    int sum=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

void main(){
    int num[]={2,4,7,8,9,'\0'};
    int sum=add(num);
    printf("Sum is : %d\n\n",sum);
}