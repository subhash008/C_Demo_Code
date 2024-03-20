#include<stdio.h>
#include<string.h>
int main(){

    typedef struct {
        int roll;
        int age;
        char name[20];

    }Student;

    Student stu;
    stu.roll=10;
    stu.age=34;
    strcpy(stu.name,"Amita");


    FILE *fp;

    //writing the data

    fp = fopen("students.data","wb");

    fwrite(&stu,sizeof(Student),1,fp);

    stu.roll=22;
    stu.age=35;
    strcpy(stu.name,"Subhash");

    fwrite(&stu,sizeof(Student),1,fp);

    fclose(fp);




    Student temp;
    fp=fopen("students.data","rb");

    fread(&temp,sizeof(Student),1,fp);
    printf("\nName : %s \nAge: %d \nRoll: %d\n\n",temp.name,temp.age,temp.roll);


    fread(&temp,sizeof(Student),1,fp);
    printf("\nName : %s \nAge: %d \nRoll: %d\n\n",temp.name,temp.age,temp.roll);
    fclose(fp);

}
