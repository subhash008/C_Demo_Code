#include<stdio.h>
#define STU 2
#define SUB 5
void main(){

    int marks[STU][SUB];
    int i, j,sum=0;

    for(i=0;i<STU;i++){

        printf("\n Enter the marks of roll no : %d\n",i+1);

        for(j=0;j<SUB;j++){

            printf("Enter the marks of %d subject : ",j+1);
            scanf("%d",&marks[i][j]);
        }
    }

    printf("\n\n\tRoll\tEng\tMath\tSST\tSCI\tHIN\tTOTAL\n");
    for(i=0;i<STU;i++){

        //printf("\n Marks of roll no : %d\n",i+1);

        sum=0;
        printf("\t%d",i+1);

        for(j=0;j<SUB;j++){
            
            printf("\t%d",marks[i][j]);
            sum=sum+marks[i][j];
        }
        printf("\t%d\n",sum);
    
    }


}