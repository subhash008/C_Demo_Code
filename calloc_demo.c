#include<stdio.h>
#include<stdlib.h>

int main(){
   
    long int n;

    printf("How many number you want to store? : ");
    scanf("%ld",&n);

    int* buffer=(int*)calloc(n,sizeof(int));

    if(buffer==NULL){
        printf("Err 34 : Not able to create buffer\n\n");
        return 1;
    }
    /*
    printf("enter %ld numbers :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&buffer[i]);
    }
    */
    printf("%ld numbers are :\n",n);
    for(int i=0;i<n;i++){
        printf("%d\n",buffer[i]);
    }
    
    free(buffer);
    buffer=NULL;

    //buffer[0]=30;
    //buffer[1]=23;

    //*(buffer+0)=40;
    //*(buffer+1)=45;

   // printf("%d\t\t %d\n\n",buffer[0],buffer[1]);
}