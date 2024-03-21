#include<stdio.h>
#define SIZE 6

typedef struct{

        int array[SIZE];
        int top;
} Stack;

void push(Stack *stack, int data){

    if(stack->top == SIZE-1)
    {
        printf("Cannot Push , Stack Overflow!!\n");
    }
    else{
       // stack->top++;
        stack->array[++stack->top]=data;
    }
}

int pop (Stack * stack){

    if(stack->top == -1){
        //printf("Cannot pop data, stack underflow!!!\n");
        return -1;
    }
    else{
        return stack->array[stack->top--];
    }
}

int peek(Stack *stack){


    if(stack->top == -1){
       // printf("Cannot peek data, stack underflow!!!\n");
        return -1;
    }
    else{
        return stack->array[stack->top];
    }
}

int print_stack(Stack * stack){

    if(stack->top == -1){
       printf("Cannot peek data, stack underflow!!!\n");
        return -1;
    }
    printf("\n--------------------\n");
    for(int i=stack->top;i>=0;i--){
        printf("%d\n",stack->array[i]);
    }
     printf("\n--------------------\n");
}


void main(){



     Stack stack;
     stack.top=-1;

     int op,data;

     while(1)
     {

             printf("Enter one of the following option :\n\n");
             printf("\t1. to push\n");
             printf("\t2. to pop\n");
             printf("\t3. to peek\n");
             printf("\t4. to print\n");
             printf("\t5. to quit\n");

             scanf("%d",&op);

             switch(op){

                case 1:
                    printf("Enter the data to push :\n");
                    scanf("%d",&data);
                    push(&stack,data);
                    break;
                case 2:
                    data=pop(&stack);
                    if(data!= -1){
                        printf("Data Poped : %d\n",data);
                    }
                    else{
                        printf("StackUnderflow !!!!\n");
                    }
                    break;

                case 3:
                    data=peek(&stack);
                    if(data!= -1){
                        printf("Data on Top : %d\n",data);
                    }
                    else{
                        printf("StackUnderflow !!!!\n");
                    }
                    break;

                case 4:
                        print_stack(&stack);
                        break;
                case 5:
                        return 0;
                default:
                        printf("Enter the right option !!!!!!\n");
             }
     }

     /*
     push(&stack,50);
    // printf("Value at top :%d\n",peek(&stack));

     print_stack(&stack);
     push(&stack,45);
     //printf("Value at top :%d\n",peek(&stack));

     print_stack(&stack);
     printf("Poped: %d\n",pop(&stack));
     print_stack(&stack);

     printf("Poped: %d\n",pop(&stack));
     print_stack(&stack);

     printf("Poped: %d\n",pop(&stack));
     print_stack(&stack);


     //printf("Value at top :%d\n",peek(&stack));

/*
     printf("Size : %d\n",SIZE);
     printf("Size : %d\n",stack.top);
     printf("Size of stack : %ld\n",sizeof(stack));
*/
}
