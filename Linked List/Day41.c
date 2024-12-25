// C program to delete middle of a linked list


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteMid(struct Node* head) {

    if (head->next == NULL)
        return NULL;

    int count = 0;
    struct Node *p1 = head, *p2 = head;

    while (p1 != NULL) {
        count++;
        p1 = p1->next;
    }

    int middleIndex = count / 2;

    for (int i = 0; i < middleIndex - 1; ++i)
        p2 = p2->next;

    p2->next = p2->next->next;
    return head;
}

void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct Node* newNode(int x) {
    struct Node* temp = 
      (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    return temp;
}

int main() {
    // Create a static hardcoded linked list:
    // 1 -> 2 -> 3 -> 4 -> 5.
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original Linked List: ");
    printList(head);

    // Delete the middle node.
    head = deleteMid(head);

    printf("Linked List after deleting the middle node: ");
    printList(head);

    return 0;
}