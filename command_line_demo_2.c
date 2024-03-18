#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[])
{
    //int m= atoi("") + atoi("30");

      
    int a= atoi(argv[1]);
    int b= atoi(argv[3]);
    char op=argv[2][0];

    if(op=='+'){
        printf("Result : %d\n\n",a+b);
    }
    else if(op=='-'){
        printf("Result : %d\n\n",a-b);
    }
    else {
        printf("Please use Op: (+ and -) Only !!!");
    }
    
}