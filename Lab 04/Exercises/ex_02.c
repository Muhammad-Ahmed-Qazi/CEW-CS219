#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* mergeLists(struct Node* l1, struct Node* l2) {
    if (!l1) return l2;
    if (!l2) return l1;

    if (l1->data < l2->data) {
        l1->next = mergeLists(l1->next, l2);
        return l1;
    } else {
        l2->next = mergeLists(l1, l2->next);
        return l2;
    }
}

void printList(struct Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    // Example: two sorted lists
    struct Node *a = createNode(1);
    a->next = createNode(3);
    a->next->next = createNode(5);

    struct Node *b = createNode(2);
    b->next = createNode(4);
    b->next->next = createNode(6);

    printf("List A: "); printList(a);
    printf("List B: "); printList(b);

    struct Node* merged = mergeLists(a, b);
    printf("Merged: "); printList(merged);
    return 0;
}
