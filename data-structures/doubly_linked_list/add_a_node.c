#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node* addNode(struct node *head, int data) {
    struct node* temp = malloc(sizeof(struct node));
    temp -> prev = NULL;
    temp -> next = NULL;
    temp -> data = data;
    head = temp;
    return head;
}

int main() {
    struct node *head = NULL;
    head = addNode(head,32);

    printf("%d",head -> data);

    return 0;
}