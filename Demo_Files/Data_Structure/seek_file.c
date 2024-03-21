#include<stdio.h>

void main(){

    FILE * fp = fopen("data.txt","r");
    long int pos= ftell(fp);

    printf("P: %ld\n",pos);

    char string[20];
    int offset=27;

    offset=-12;

    printf("Movind pointer to %d location \n ",offset);
    fseek(fp,offset,SEEK_END);

    pos= ftell(fp);
    printf("P: %ld\n",pos);

    fscanf(fp,"%s",string);
    printf("String is : %s\n",string);

    /*
    fscanf(fp,"%s",string);
    printf("String is : %s\n",string);

    pos= ftell(fp);
    printf("P: %ld\n",pos);

     fscanf(fp,"%s",string);
    printf("String is : %s\n",string);

    pos= ftell(fp);
    printf("P: %ld\n",pos);

     fscanf(fp,"%s",string);
    printf("String is : %s\n",string);

    pos= ftell(fp);
    printf("P: %ld\n",pos);

    printf("Using Rewind Now .. \n");
    rewind(fp); // move pointer to start

    pos= ftell(fp);
    printf("P: %ld\n",pos);

     fscanf(fp,"%s",string);
    printf("String is : %s\n",string);
    pos= ftell(fp);
    printf("P: %ld\n",pos);

     fscanf(fp,"%s",string);
    printf("String is : %s\n",string);
    */

}
