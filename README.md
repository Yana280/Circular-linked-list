# Circular-linked-list
This program defines a struct node to represent each node in the linked list, and includes two functions: insertAtBeginning() to insert a new node at the beginning of the linked list, and printList() to print the linked list starting from a given node.

In the main() function, the program initializes an empty circular linked list, inserts three nodes into the linked list using the insertAtBeginning() function, and then prints the linked list using the printList() function.
![Screenshot (309)](https://user-images.githubusercontent.com/125993593/234593490-dccb02b8-1296-463d-a301-570329b13bfe.png)

### Algorithm
start

Define a structure struct node to represent each node in the linked list. The structure should have two members: data to hold the value of the node, and next to hold a pointer to the next node in the linked list.

Define a function insertAtBeginning() to insert a new node at the beginning of the linked list. The function should take two arguments: a pointer to a pointer to the head node of the linked list, and the value of the new node to be inserted. The function should perform the following steps:

Allocate memory for a new node using malloc().

Set the data and next members of the new node.

If the linked list is not empty, find the last node in the linked list using a loop that starts from the head node and follows the next pointers until it reaches the last node. Link the next pointer of the last node to the new node.

If the linked list is empty, link the next pointer of the new node to itself.

Set the head pointer to the new node.

Define a function printList() to print the circular linked list starting from a given node. The function should take a pointer to the head node of the linked list as its argument. The function should perform the following steps:

Initialize a pointer current to the head node.

If the head node is not NULL, loop through the linked list using a do-while loop that prints the value of the data member of each node and updates the current pointer to the next node, until it reaches the head node again.

In the main() function, declare a pointer variable head to the head node of the linked list and initialize it to NULL.

Use the insertAtBeginning() function to insert three nodes with values 1, 2, and 3 at the beginning of the linked list.

Use the printList() function to print the linked list.

stop

