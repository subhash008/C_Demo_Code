#include<stdio.h>

int add (int, int);
void greet(char *);
void doNothing();

int maxi(int *arr,int size){
    int max=arr[0];
    int i;
    for(i=1; i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}
float maxf(float *arr,int size){
    float max=arr[0];
    int i;
    for(i=1; i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

void main(){

    doNothing();
    /*int int_num[]={12,43,11,32,23,2};
    float int_num2[]={3.6,8.7,5.6,8.9,1.2,4.5};
    float max_val;
    max_val=maxf(int_num2,sizeof(int_num)/sizeof(float));


   printf("Max value is : %f\n",max_val);
   char name[]="subhash";
   greet("Suman");

  int num1=600,num2=500,sumn;
    sumn=add(num1,num2);

  //printf("Sum : %d\n\n",sum);
  */

}

void greet(char *name){
    printf("Good Morning, %s !\n\n",name);
  //  int val=add(2,4);
    //printf("Result : %d\n\n",val);
}

int add(int x, int y){

    int s=x+y;
    return s;
}
int sub(int x, int y){
    int d=x-y;
    return d;
}
int mul(int x, int y){
    int d=x*y;
    return d;
}

int doSomething(int x, int y,int (*p_fun) (int,int)){

    int result=p_fun(x,y);
    return result;
}
void doNothing(){

    int a=10,b=5;
    int r = doSomething(a,b,mul);

    printf("Value of Result : %d\n\n",r);

}