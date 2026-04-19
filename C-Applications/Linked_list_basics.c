#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next; 
};

void printList(struct node* n) {
    while (n != NULL) {
        printf("[Data: %d | Next: %p] --> ", n->data, (void*)n->next);
        n = n->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));

    head->data = 2026;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = 365;
    third->next = NULL;

    printf("--- 2026 Execution List ---\n");
    printList(head);

    free(head);
    free(second); 
    free(third);
    
    return 0;
}

