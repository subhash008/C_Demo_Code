#include<stdio.h>
#define SIZE 5
void main(){

 
    int marks[SIZE],i,count_even=0,count_odd=0;

   printf("\nEnter the marks of 5 subjects: \n");

   for(i=0;i<SIZE;i++){
        scanf("%d",&marks[i]);
   }
    //printf("\n\nmarks of 5 subjects: \n");

   for(i=SIZE-1;i>=0;i--){

        if(marks[i]%2==0){
            count_even++;
            printf("Number : %d  is even \n",marks[i]);
        }     
        else{
            count_odd++;
            printf("Number : %d  is odd \n",marks[i]);
        }
            
        
        //printf("%d\n",marks[i]);
   }
   printf("\n\n Total even Numbers : %d and Total odd number : %d\n\n", count_even,count_odd);
   


}