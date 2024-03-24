#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 10
typedef struct {

    int emp_id;
    char name[20];
    int sal;
} Employee;

int count=-1;
void add_emp(Employee* emp){

    count++;
    if(count == SIZE-1){
        printf("Cannot add more employe, array is full!!");
        return;
    }
    printf("enter emp no :");
    scanf("%d",&emp[count].emp_id);
    printf("enter Name :");
    scanf("%s",emp[count].name);
    printf("enter Sal :");
    scanf("%d",&emp[count].sal);

    printf("\nemployee added sucessfuly!!!\n");


}

void print_emp(Employee* emp){



    for(int i =0; i<=count;i++){
    printf("\n-----------------------------------------");
       printf("\nemp no :");
        printf("%d",emp[i].emp_id);
        printf("\nName :");
    printf("%s",emp[i].name);
    printf("\nSal :");
    printf("%d",emp[i].sal);

    }
    printf("\n-----------------------------------------\n");
    printf("Total EMp: %d\n",count+1);

}

void find_emp(Employee* emp,int id){
    int flag=0;
    for(int i =0; i<=count;i++){

        if(emp[i].emp_id==id){
            flag=1;
            printf("\n-----------------------------------------");
            printf("\nemp no :");
            printf("%d",emp[i].emp_id);
            printf("\nName :");
            printf("%s",emp[i].name);
            printf("\nSal :");
            printf("%d",emp[i].sal);
        }
    }
    printf("\n-----------------------------------------\n");
    if(flag ==0){
        printf("Not able to find the employee with id : %d\n",id);
    }
    printf("Total EMp: %d\n",count+1);
}

void find_emp_max_salary(Employee* emp){


    if(count==-1){
        printf("\nList is empty !!\n");
        return;
    }
     int max=emp[0].sal;
     int id =0;

    for(int i =1; i<=count;i++){

        if(emp[i].sal>max){
                max=emp[i].sal;
                id=i;
        }
    }
        printf("\n-----------------------------------------");
        printf("Employe with higest sal:\n\n");
        printf("\nemp no :");
        printf("%d",emp[id].emp_id);
        printf("\nName :");
        printf("%s",emp[id].name);
        printf("\nSal :");
        printf("%d",emp[id].sal);

        printf("\n-----------------------------------------\n");


}

int main(){

    Employee * emp = (Employee*) malloc (sizeof(Employee)*SIZE);
    int op,id;

    while(1){

        printf("Select one of the option :");
        printf("\n\n\t 1. to add emp");
        printf("\n\t 2. to print all emp");
        printf("\n\t 3. to find emp");
        printf("\n\t 4. to quit");
        printf("\n\t 5. to find emp with higest sal");

        printf("\n\n\t Enter your option : ");
        scanf("%d",&op);


        switch(op){

        case 1:
             add_emp(emp);
             break;
        case 2:
            print_emp(emp);
            break;
        case 3:
            printf("\n Enter Id to search : ");
            scanf("%d",&id);
            find_emp(emp,id);
            break;
        case 4:
            return 0;

        case 5:
                find_emp_max_salary(emp);
                break;
        default:
            printf("\n Enter a valid option!!!!\n");

        }

    }








}

