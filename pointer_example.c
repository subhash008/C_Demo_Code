#include<stdio.h>
void main(){

    int num=10;
    char ch='a';

    float f_val=10.33;

    int roll[]={5,6,8,12,56,12,36};

    int *pt =roll;
    
    pt=pt + 3;

    for(int i=0;i<sizeof(roll)/sizeof(int)/2+1;i++)
    {
        printf("%d\n",*(pt--));
    }
    



    //printf("\n%f\n\n",*p_f);
}