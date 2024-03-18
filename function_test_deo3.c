#include<stdio.h>
void add(int arr[]){

   
    for(int i=0;arr[i]!='\0';i++)
    {
        arr[i]+=arr[i]*10/100;
    }
   
}

void numcpy(int t[],int s[]){
    for(int i=0;s[i]!='\0';i++)
    {
        t[i]=s[i];
    }
}

void main(){
    int sal[]={2000,4000,7000,8000,9000,'\0'};
    int in_sal[6];
    numcpy(in_sal,sal);
    add(in_sal);
    for(int i=0;in_sal[i]!='\0';i++)
    {
        printf("New Sal of emp: %d is %d\n",i+1,in_sal[i]);
        printf("Old Sal of emp: %d is %d\n",i+1,sal[i]);
        printf("--------------------------------------\n\n");

    }
    
}