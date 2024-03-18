#include<stdio.h>

void demoValue (int value){
    value = value +10;
    printf("Value in demo : %d \n\n",value);
}

void demoReff(int *reff,int *result){
    *result=(*reff)+10;
    printf("Value in demo : %d \n\n",*reff);
    static int count=0;
    count ++;
    printf("This function is called %d times\n",count);
}

void main(){

    int num =10;

   printf("Value of num before function call : %d\n\n",num);

    int r;
    int count;
    demoReff( &num, &r);
    count=0;
    demoReff( &num, &r);
    count=0;
    demoReff( &num, &r);

    printf("R: %d\n\n",r);

    printf("Value of num after function call : %d\n\n",num);

   /*
   int num=10;
    printf("Value of num before function call : %d\n\n",num);

    demoValue(num);

    printf("Value of num after function call : %d\n\n",num);
    */

   

}