#include"stdio.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    typedef struct
    {
        int roll;
        char name[20];
        float marks;
        int age;
        struct Subject* subject;
    }Student;
 
    Student * p_stu= (Student*) malloc (sizeof(Student));

    p_stu->age=34;
    strcpy(p_stu->name,"Subhash");
    p_stu->marks=67.5;

    printf("Name is : %s\n\n",p_stu->name);


    /*
    
    aman.age=60;

    printf("%d\n\n",aman.age);

    Student suman;

    typedef int int2;     // int should be 2 byte

    typedef short int   int2;   // int as 4 byte in another machine
  */
}