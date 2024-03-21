#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
  int data[MAX_SIZE];
  int front, rear;
} Queue;

void initialize_queue(Queue* q) {
  q->front = q->rear = -1;
}

int is_empty(Queue* q) {
  return q->front == -1;
}

int is_full(Queue* q) {
  return q->rear == MAX_SIZE - 1;
}

void enqueue(Queue* q, int value) {
  if (is_full(q)) {
    printf("Queue overflow\n");
    return;
  }
  if (q->front == -1) {
    q->front = 0;
  }
  q->rear++;
  q->data[q->rear] = value;
}

int dequeue(Queue* q) {
  if (is_empty(q)) {
    printf("Queue underflow\n");
    return -1;
  }
  int value = q->data[q->front];
  q->front++;
  if (q->front > q->rear) {
    q->front = q->rear = -1;
  }
  return value;
}

int peek(Queue* q) {
  if (is_empty(q)) {
    printf("Queue is empty\n");
    return -1;
  }
  return q->data[q->front];
}

int main() {
  Queue myQueue;
  initialize_queue(&myQueue);

  int choice, value;

  do {
    printf("\nQueue Menu:\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Peek\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        enqueue(&myQueue, value);
        break;
      case 2:
        value = dequeue(&myQueue);
        if (value != -1) {
          printf("Dequeued element: %d\n", value);
        }
        break;
      case 3:
        value = peek(&myQueue);
        if (value != -1) {
          printf("Front element: %d\n", value);
        }
        break;
      case 4:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice\n");
    }
  } while (choice != 4);

  return 0;
}
