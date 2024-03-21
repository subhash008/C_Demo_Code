#include <stdio.h>
#define MAX_SIZE 100 // Maximum stack size (adjust as needed)

typedef struct {
  int data[MAX_SIZE];
  int top;
} Stack;

void initialize_stack(Stack* s) {
  s->top = -1; // Empty stack initially
}

int is_empty(Stack* s) {
  return s->top == -1;
}

int is_full(Stack* s) {
  return s->top == MAX_SIZE - 1;
}



// Push (add element to the top)
void push(Stack* s, int value) {
  if (is_full(s)) {
    printf("Stack overflow\n");
    return;
  }
  s->data[++s->top] = value; // Increment top after storing the value
}

// Pop (remove and return the top element)
int pop(Stack* s) {
  if (is_empty(s)) {
    printf("Stack underflow\n");
    return -1; // Indicate error or a special value
  }
  return s->data[s->top--]; // Decrement top after returning the value
}

// Peek (return the top element without removing it)
int peek(Stack* s) {
  if (is_empty(s)) {
    printf("Stack is empty\n");
    return -1; // Indicate error or a special value
  }
  return s->data[s->top]; // Return the top element
}
void main(){

    Stack myStack;
    initialize_stack(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);

    int topElement = peek(&myStack);
    printf("Top element: %d\n", topElement);

    int removedElement = pop(&myStack);
    printf("Removed element: %d\n", removedElement);

    topElement = peek(&myStack);
    printf("Top element: %d\n", topElement);

}
