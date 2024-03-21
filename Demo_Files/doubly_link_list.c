#include <stdio.h>
#include <stdlib.h>


struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
};

struct Node* createNode(int data) {
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

void insertAtBeginning(struct Node** head_ref, int data) {
  struct Node* newNode = createNode(data);
  newNode->next = *head_ref;
  if (*head_ref != NULL) {
    (*head_ref)->prev = newNode;
  }
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
  newNode->prev = last;
}

void deleteNode(struct Node** head_ref, int key) {
  if (*head_ref == NULL) return; // List is empty

  // Store head node
  struct Node *temp = *head_ref;

  // If head node itself holds the key
  if (temp != NULL && temp->data == key) {
    *head_ref = temp->next;
    if (*head_ref != NULL) {
      (*head_ref)->prev = NULL;
    }
    free(temp);
    return;
  }

  // Search for the key to be deleted
  while (temp != NULL && temp->data != key) {
    temp = temp->next;
  }

  // If key was not present in linked list
  if (temp == NULL) return;

  // Node to be deleted is not the head or tail
  if (temp->next != NULL) {
    temp->next->prev = temp->prev;
  }
  if (temp->prev != NULL) {
    temp->prev->next = temp->next;
  }

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

  insertAtEnd(&head, 10); // Insert 10 at the end
  insertAtBeginning(&head, 5); // Insert 5 at the beginning
  insertAtBeginning(&head, 15);
  insertAtBeginning(&head, 50);
  insertAtBeginning(&head, 55);

  printf("Created Doubly Linked List: ");
  printList(head); // Print the list forward (5 10)

  deleteNode(&head, 5); // Delete the node with value 5

  printf("Linked List after deletion: ");
  printList(head); // Print the list forward (10)




  return 0;
}
