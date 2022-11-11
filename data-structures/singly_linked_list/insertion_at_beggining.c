#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* push(struct node* head, int d) {
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> data = d;
    ptr -> next = NULL;

    ptr -> next = head;
    head = ptr;
    return head;
};


int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 35;
    head -> next = NULL;

    struct node *ptr = (struct node *) malloc(sizeof(struct node));
    ptr -> data = 54;
    ptr ->next = NULL;

    head -> next = ptr;

    int data = 87;

    head = push(head, data);
    ptr = head;
    
    while(ptr != NULL) {
        printf("%d\n",ptr -> data);
        ptr = ptr -> next;
    }

    return 0;
}