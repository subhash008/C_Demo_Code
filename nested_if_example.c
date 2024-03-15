#include<stdio.h>

void main()
{
    int n=131;
    if(n%2==0)
    {
        printf("Number is even \n\n");
        if(n>100)
            printf("Number > then 100 \n\n");   
    }
    else
    {
        printf("Number is odd \n\n");
        if(n>100)
            printf("Number > then 100 \n\n");
    }
    printf("Value of n : %d\n\n",n);  

    

}