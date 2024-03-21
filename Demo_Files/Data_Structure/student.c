
#include<stdio.h>
#include<stdlib.h>

typedef struct{

    char name[50];
    int roll;
    int marks;

}Student;

void read_student(Student *stu,int *count, char * filename){

    FILE *fp= fopen(filename,"r");
    int no;

    fscanf(fp,"%d",&no);

    *count=no;

    stu= (Student *) malloc (sizeof(Student)* no);

    for(int i=0;i<no;i++){
        fscanf(fp, "%s %d %d", (*stu)[i].name, &(*stu)[i].roll, &(*stu)[i].marks);
    }
    fclose(fp);

}

void print_student(Student *stu,int count){

    for(int i=0;i<count;i++){

        printf("Name :%s\nRoll: %d\nMarks: %d\n",(*stu)[i].name, (*stu)[i].roll, (*stu)[i].marks);
    }

}


void main(){

    Student * stu;
    int stu_count;

    read_student(stu,&stu_count,"student.txt");

    print_student(stu,stu_count);

}
