#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* prev;
    struct node* next;
};

int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> data = 23;
    head -> prev = NULL;
    head -> next = NULL;

    return 0;
}
