#include <stdio.h>
#include <stdlib.h>
// Define a structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};
// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the beginning of the linked list
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = head;
    return newNode;
}
// Function to insert a node at the end of the linked list
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        return newNode;
    }
    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
// Function to insert a node after a specific node
struct Node *insertAfter(struct Node *head, int data, int searchValue)
{
    struct Node *newNode = createNode(data);
    struct Node *current = head;
    while (current != NULL && current->data != searchValue)
    {
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Node with search value not found\n");
        free(newNode); // Free the allocated node
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
// Function to delete a node with a specific value
struct Node *deleteNode(struct Node *head, int data)
{
    struct Node *current = head;
    struct Node *prev = NULL;
    while (current != NULL && current->data != data)
    {
        prev = current;
        current = current->next;
    }
    if (current == NULL)
    {
        printf("Node with value not found\n");
        return head;
    }
    if (prev == NULL)
    {
        head = current->next;
    }
    else
    {
        prev->next = current->next;
    }
    free(current);
    return head;
}
// Function to search for a node with a specific value
struct Node *searchNode(struct Node *head, int data)
{
    struct Node *current = head;
    while (current != NULL)
    {
        if (current->data == data)
        {
            return current;
        }
        current = current->next;
    }
    return NULL; // Node not found
}
// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
// Function to free the memory used by the linked list
void freeList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        struct Node *temp = current;
        current = current->next;
        free(temp);
    }
}
int main()
{
    struct Node *head = NULL;
    // Insert nodes at the beginning
    head = insertAtBeginning(head, 3);
    head = insertAtBeginning(head, 2);
    head = insertAtBeginning(head, 1);
    // Insert nodes at the end

    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    // Insert a node after a specific value
    head = insertAfter(head, 6, 3);
    // Print the linked list
    printf("Linked List: ");
    printList(head);
    // Search for a node
    int searchValue = 4;
    struct Node *foundNode = searchNode(head, searchValue);
    if (foundNode != NULL)
    {
        printf("Node with value %d found\n", searchValue);
    }
    else
    {
        printf("Node with value %d not found\n", searchValue);
    }
    // Delete a node
    int deleteValue = 2;
    head = deleteNode(head, deleteValue);
    // Print the linked list after deletion
    printf("Linked List after deletion: ");
    printList(head);
    // Free the memory
    freeList(head);
    return 0;
}