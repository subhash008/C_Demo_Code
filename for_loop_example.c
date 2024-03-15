#include<stdio.h>

void main(){

/*   int i;

    for( i=5 ; i<13;  i=i+2)
    {
        printf("%d\n",i);
    }
*/

    int n=1; //initilization
    int a,b,op,result,is_quit=1;

    for( ;is_quit==1 ; )
    {
        printf("\n\n enter the value of a and b : ") ;
        scanf("%d%d",&a,&b);
        printf("\n\nEnter \n\t1 : to add\n\t2 : to sub " );
        printf("\n\t\tAns: ");
        scanf("%d",&op);
        switch (op)
        {
            case 1:
                result=a+b;
                break;
            case 2:
                result=a-b;
                break;
            default:
                printf("\n\nyou have not entered right option!! ");
            
        }
        printf("\n\n \t Reuslt is : %d",result);
        printf("\n\nEnter 1 if you want to calucate again or 0 to quit ");
        printf("\n\t\tAns: ");
        scanf("%d",&is_quit);

    }

}
