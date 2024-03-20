#include<stdio.h>
#include<string.h>
void main(){

    struct Subject{
        int sub_code;
        char sub_name[20];
        int creadit_point;
    };

    struct Student
    {
        int roll;
        char name[20];
        float marks;
        int age;
        struct Subject* subject;
    };

    

    struct Subject sub ;
    sub.sub_code=12;
    strcpy(sub.sub_name,"Java");
    sub.creadit_point=10;

    struct Student subhash,badrinath;

   int size= sizeof(subhash);
    subhash.subject=&sub;

    subhash.roll=10;
    strcpy(subhash.name,"Subahsh Joshi");
    subhash.marks=65;
    subhash.age=34;

    badrinath.roll=11;
    strcpy(badrinath.name,"Badrinath");
    badrinath.marks=90;
    badrinath.age=25;

    printf("\nRoll No : %d\n",subhash.roll);
    printf("\nName  : %s\n",subhash.name);
    printf("\nMarks : %f\n",subhash.marks);
    printf("\nAge : %d\n",subhash.age);
    printf("------------------------------------------");
    printf("\nRoll No : %d\n",badrinath.roll);
    printf("\nName  : %s\n",badrinath.name);
    printf("\nMarks : %f\n",badrinath.marks);
    printf("\nAge : %d\n",badrinath.age);
    
}