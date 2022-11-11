#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *pop(struct node *head) {
    if(head == NULL) {
        printf("list is empty");
    }
    else {
        struct node *temp = head;
        head = head -> next;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 34;
    head -> next = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = 23;
    ptr -> next = NULL; 
    head -> next = ptr;


    head = pop(head);
    ptr = head;

    while(ptr != NULL) {
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }

    head -> data = 45;
    head -> next = NULL;

    free(head);
    free(ptr);
    return 0;
}