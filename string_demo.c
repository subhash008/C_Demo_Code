#include<stdio.h>
#include<string.h>

void main(){

    //char name[]={'H','e','l','l','o','\0'};

    char fname[15]="subhash ";
    char l_name[15]="joshi";
    char full_name[10];

    //fname="subahsh";

    strcat(full_name,fname);
    strcat(full_name,l_name);

   // printf("Enter Your name: ");
    //scanf("%[^\n]",fname);
    //strcpy(d_name,name);
    
    //int len=sizeof(name);

   /* int len = strlen(name);
    printf("%d\n\n",len);
    int count=0;

    for(int i=0;name[i]!='\0';i++){

        if(name[i]=='a' || name[i]=='A')
        {
            count++;
        }

    }
    */
    //printf("No of A in your name are: %d\n\n",count);
    //printf("My name is : %s\n\n Len : %d\n\n",d_name,len);
    printf("Full name : %s\n\n",full_name);
}