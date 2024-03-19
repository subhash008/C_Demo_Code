#include<stdio.h>
void main(){

    char *name="\tName : Subhash \n\tState :\t Uttrakhand\n\n ";
    char kk[]="\tName : Subhash \n\tState :\t Uttrakhand\n\n ";
    char f_name[20];
    //char *name;
    printf("\nEnter your name : ");
   // scanf("%s",f_name);

    char *temp=name;

    //name = f_name;

    //printf("\n\n Your name is : %s",name);
   // printf("\n\n  %s",temp);

    int len=sizeof(*name);

    printf("\n\nsize: %d",len);
   printf("\n\n%cx\n\n",temp);


}
// name[0]  <=> *name
// name[1]  <=> *(name+1)
// name[i]  <=> *(name+i)