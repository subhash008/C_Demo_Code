#include<stdio.h>

void main()
{
    int in=1570000,tax;
    
    if(in<=300000)
        tax=0;
    else if(in <=600000)
        tax=in * 5 / 100;
    else if(in < 900000)
        tax=15000 + (in-600000)*10/100;
    else if(in < 1200000)
        tax=45000 + (in-900000)*15/100;
    else
        tax=90000 + (in-1200000)*20/100; 

    printf("======================================================\n\n");
    printf("\t\tYour Income : %d\n\n",in);
    printf("\t\tTotal tax : %d\n\n",tax);
    printf("======================================================\n\n");
    printf("\t\tThank you for using our Software\n\n");

}