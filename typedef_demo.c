#include<stdio.h>
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
 
    Student aman;

    aman.age=60;

    printf("%d\n\n",aman.age);

    Student suman;

    typedef int int2;     // int should be 2 byte

    typedef short int   int2;   // int as 4 byte in another machine
  
}