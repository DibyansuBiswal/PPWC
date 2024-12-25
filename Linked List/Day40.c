//Delete last occurrence of an item from linked list

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* deleteLastOccurrence(struct Node* head, int key) {
    struct Node *last = NULL, *lastPrev = NULL;
    struct Node *curr = head, *prev = NULL;


    while (curr != NULL) {
        if (curr->data == key) {
            lastPrev = prev;
            last = curr;
        }
        prev = curr;
        curr = curr->next;
    }

    if (last != NULL) {

        if (lastPrev != NULL) {
            lastPrev->next = last->next;
        } else {

            head = head->next;
        }
        free(last);
    }

    return head;
}

void print(struct Node* curr) {
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

struct Node* createNode(int new_data) {
    struct Node* newNode = 
      (struct Node*)malloc(sizeof(struct Node));
    newNode->data = new_data;
    newNode->next = NULL;
    return newNode;
}

int main() {
  
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(2);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(2);

    int key = 2;
    head = deleteLastOccurrence(head, key);
    print(head);
    return 0;
}