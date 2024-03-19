#include<stdio.h>

int find_len(char *str){

    if(str==NULL){
        return 0;
    }
    int count=0; 
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;

}


void main(){

    char *name="Subhash Joshi";
    // name=??

    //char name[]="Subhash Joshi";

    //name[7]='-';
    //*(name+7)='-';

    char *noPoint;

    int len=find_len(noPoint);
    
    //int len=sizeof(name);
    printf("len: %d\n\n",len);
    printf("Name : %s\n\n",name);
}