#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* sortedInsert(struct Node* sorted, struct Node* newNode) {
    if (sorted == NULL || sorted->data >= newNode->data) {
        newNode->next = sorted;
        sorted = newNode;
    } 
    else {
        struct Node* temp = sorted;
        while (temp->next != NULL && temp->next->data < newNode->data) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    return sorted;
}

struct Node* insertionSort(struct Node* head) {
    struct Node* sorted = NULL;
    struct Node* curr = head;

    while (curr != NULL) {
        struct Node* next = curr->next; 
        curr->next = NULL;           
        sorted = sortedInsert(sorted, curr);
        curr = next;
    }

    return sorted;
}
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = newNode(4);
    head->next = newNode(2);
    head->next->next = newNode(1);
    head->next->next->next = newNode(3);

    printf("Original list: ");
    printList(head);

    head = insertionSort(head);

    printf("Sorted list: ");
    printList(head);

    return 0;
}
