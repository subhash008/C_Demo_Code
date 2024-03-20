#include<stdio.h>
#include<string.h>
void main(){

    struct Student
    {
        int roll;
        char name[20];
        float marks;
        int age;
    };

    struct Student stu[10];
    int num;
    printf("Enter no of student : \n");
    scanf("%d",&num);
    float sum=0;
    for(int i=0;i<num;i++)
    {
        printf("Enter the detail of Roll : %d\n",i+1);
        stu[i].roll=i+1;
        printf("Enter name : ");
        scanf("%s",stu[i].name);
        printf("Enter marks : ");
        scanf("%f",&stu[i].marks);
        sum=sum+stu[i].marks;
        printf("Enter age : ");
        scanf("%d",&stu[i].age);
    }
   for(int i=0;i<num;i++)
    {
        printf("\n---------------------------------\n");
        printf("The detail of Roll : %d\n",i+1);
        //printf("\nRoll No : %d\n",stu[i].roll);
        printf("\nName  : %s\n",stu[i].name);
        printf("\nMarks : %f\n",stu[i].marks);
        printf("\nAge : %d\n",stu[i].age);
        
    }
    printf("---------------------------------\n");
    printf("Avg of Marks : %f ",sum/num);


    
}