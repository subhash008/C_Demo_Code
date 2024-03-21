
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data; // Data to be stored
  struct Node* next; // Pointer to the next node
};

struct Node* createNode(int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void insertAtBeginning(struct Node** head_ref, int data) {
  struct Node* newNode = createNode(data);
  newNode->next = *head_ref;
  *head_ref = newNode;
}

void insertAtEnd(struct Node** head_ref, int data) {
  struct Node* newNode = createNode(data);
  if (*head_ref == NULL) {
    *head_ref = newNode;
    return;
  }

  struct Node* last = *head_ref;
  while (last->next != NULL) {
    last = last->next;
  }
  last->next = newNode;
}

void deleteNode(struct Node** head_ref, int key) {
  if (*head_ref == NULL) return; // List is empty

  struct Node* temp = *head_ref, *prev;

  // If head node itself holds the key
  if (temp != NULL && temp->data == key) {
    *head_ref = temp->next;
    free(temp);
    return;
  }

  // Search for the key to be deleted
  while (temp != NULL && temp->data != key) {
    prev = temp;
    temp = temp->next;
  }

  // If key was not present in linked list
  if (temp == NULL) return;

  // Unlink the node from the list
  prev->next = temp->next;
  free(temp);
}

void printList(struct Node* head) {
  while (head != NULL) {
    printf("%d ", head->data);
    head = head->next;
  }
  printf("\n");
}

int main() {
  struct Node* head = NULL;

  insertAtEnd(&head, 10);
  insertAtBeginning(&head, 5);
  insertAtEnd(&head, 20);

  printf("Created Linked List: ");
  printList(head);

  deleteNode(&head, 10);

  printf("Linked List after deletion: ");
  printList(head);

  return 0;
}


