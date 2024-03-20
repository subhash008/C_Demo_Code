#include<stdio.h>
#include<string.h>

typedef struct {
        int roll;
        int age;
        char name[20];

    }Student;

void add_student(char *file_name){

    FILE * fp= fopen(file_name,"ab");

    Student stu;
    printf("Enter the roll No : ");
    scanf("%d",&stu.roll);
    printf("Enter the Name : ");
    scanf("%s",stu.name);
    printf("Enter the Age : ");
    scanf("%d",&stu.age);

    fwrite(&stu,sizeof(Student),1,fp);
    fclose(fp);
}

void read_all_student(char *file_name){

    FILE * fp= fopen(file_name,"rb");

    Student stu;
    int count=0;
    while(fread(&stu,sizeof(Student),1,fp)==1){

       count++;
       printf("\n-------------------------------------------\n");
       printf("Record of %d Student\n",count);
       printf("Roll No : %d\n",stu.roll);
       printf("Name : %s\n",stu.name);
       printf("Age : %d\n",stu.age);

    }
    printf("\n\nTotal Students in DB : %d\n",count);
    fclose(fp);
}

void get_json(char *file_name){

    FILE * fp= fopen(file_name,"rb");

    FILE * fjson= fopen("student_json.txt","w");
    Student stu;
    int count=0;
    fprintf(fjson,"%c\n",'[');
    while(fread(&stu,sizeof(Student),1,fp)==1){

       count++;
       fprintf(fjson,"\t%c\n",'{');

       fprintf(fjson,"\t\t\"%s\" :","roll");
       fprintf(fjson," %d,\n",stu.roll);

       fprintf(fjson,"\t\t\"%s\" :","age");
       fprintf(fjson," %d,\n",stu.age);

       fprintf(fjson,"\t\t\"%s\" :","name");
       fprintf(fjson," %s\n",stu.name);

        fprintf(fjson,"\t%c\n",'}');

    }
    fprintf(fjson,"%c\n",']');
    fclose(fp);
    fclose(fjson);
}

void search_student(char *filename){

FILE * fp= fopen(filename,"rb");

    Student stu;
    int roll;
    printf("\n\nEnter the roll no to search : ");
    scanf("%d",&roll);
    char flag='F';
    while(fread(&stu,sizeof(Student),1,fp)==1){

            if(stu.roll==roll){
                flag='T';
                   printf("\n-------------------------------------------\n");
                   printf("Roll No : %d\n",stu.roll);
                   printf("Name : %s\n",stu.name);
                   printf("Age : %d\n",stu.age);
            }
    }

    if(flag=='F'){
     printf("\n Student with roll no %d not in the records!!\n\n",roll);
    }
    fclose(fp);

}

int main(){

    char file_name[50];
    int op;

    printf("Enter the file name : ");
    scanf("%s",file_name);

    do{

        printf("\nSelect one of the following options:\n\n");
        printf("\t 1. for adding student record\n");
        printf("\t 2. for read all student record\n");
        printf("\t 3. for searching student record\n");
        printf("\t 4. to Quit\n");
        printf("\tYour Option: ");

        scanf("%d",&op);

        switch(op){
        case 1:
            add_student(file_name);
            break;
        case 2:
            read_all_student(file_name);
            break;
        case 3:
                search_student(file_name);
                break;
        case 4:
                break;
        default:
            printf("\nSelect the correct option !!\n");
        }
    }while(op!=4);
    get_json(file_name);
}
