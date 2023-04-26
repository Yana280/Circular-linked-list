#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node in the linked list
struct node {
  int data;
  struct node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct node** head, int data) {
  // Allocate memory for a new node
  struct node* newNode = (struct node*)malloc(sizeof(struct node));

  // Set the data and the next pointer of the new node
  newNode->data = data;
  newNode->next = *head;

  // If the linked list is not empty, find the last node and link it to the new node
  if (*head != NULL) {
    struct node* last = *head;
    while (last->next != *head) {
      last = last->next;
    }
    last->next = newNode;
  } else {
    // If the linked list is empty, link the new node to itself
    newNode->next = newNode;
  }

  // Set the head to the new node
  *head = newNode;
}

// Function to print the linked list starting from the given node
void printList(struct node* head) {
  struct node* current = head;
  if (head != NULL) {
    do {
      printf("%d ", current->data);
      current = current->next;
    } while (current != head);
  }
  printf("\n");
}

int main() {
  // Initialize an empty linked list
  struct node* head = NULL;

  // Insert some nodes into the linked list
  insertAtBeginning(&head, 3);
  insertAtBeginning(&head, 2);
  insertAtBeginning(&head, 1);

  // Print the linked list
  printf("The circular linked list is: ");
  printList(head);

  return 0;
}

