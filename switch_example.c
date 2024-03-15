#include<stdio.h>

void main()
{
    char plan='z';

    printf("\n\n");
    switch (plan)
    {
        case 'd':
            printf("->Pizza\n");

        case 'p':
            printf("->Briyani\n");

        case 'g':
            printf("->Maggie\n");
          
        case 's':
            printf(" ->Tea\n");
            break;
        default:
            printf("Select a valid membership Plan\n\n");
            
    }

}