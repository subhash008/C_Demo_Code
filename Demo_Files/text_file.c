#include<stdio.h>

int main(){

    FILE* fp = fopen("data.txt","w");



    int age=40;
    float marks=78.5;
    char name[]="Aman";

    int g_age;
    float g_marks;
    char g_name[20];

    //writing data to file

    if(fp==NULL)
    {
        printf("Error in file opening!!!!");
        return 1;
    }

    fprintf(fp,"%d %f %s\n",age,marks,name);
    fprintf(fp,"%d %f %s\n",30,45.6,"Subhash");
    fprintf(fp,"%d %f %s\n",45,98.5,"Anubha");

    fclose(fp);

    fp = fopen("data.txt","r");

    while(fscanf(fp,"%d %f %s",&g_age,&g_marks,g_name) !=EOF)
    {
        printf("\n\nName : %s\nAge : %d\nMarks : %f",g_name,g_age,g_marks);
    }

    fclose(fp);

}
