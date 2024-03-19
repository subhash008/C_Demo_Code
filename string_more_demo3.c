#include<stdio.h>
void main(){

    char name[]="subahkh";

    char *p_name=name;
   
   printf("\n%c\n\n",*(p_name)); 
    printf("\n%c\n\n",*(p_name+1));

    p_name=p_name+3;

    printf("\n%c\n\n",*(p_name)); 
    printf("\n%c\n\n",*(p_name+1)); 

    p_name=p_name-3;

    printf("\n%c\n\n",*(p_name)); 
    printf("\n%c\n\n",*(p_name+1)); 




}