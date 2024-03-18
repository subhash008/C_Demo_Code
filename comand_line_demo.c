#include<stdio.h>

void main(int argc,char *argv[])
{

    //printf("No of Arguments : %d\n",argc);

    if(argc<2)
        printf("Error Code 202: Username must be provided!!\n\n");
    else
        printf("Hello, %s !\n\n",argv[1]);
    
    /*
    for(int i=0;i<argc;i++)
    {
        printf("%s\n",argv[i]);
    }
    */
}