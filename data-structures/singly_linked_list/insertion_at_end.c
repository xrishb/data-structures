// insert at end

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* push(struct node *head,int data) {
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));

    temp -> data = data;
    temp -> next = NULL;
    
    while(ptr -> next != NULL) {
        ptr = ptr -> next;
    }
    ptr -> next = temp;
}


int main() {
    struct node *head = (struct node *)malloc(sizeof(struct node));

    head -> data = 54;
    head -> next = NULL;

    struct node *ptr = head;
    ptr = push(head,545);
    ptr = push(head,87);
    ptr = push(head,1);

    ptr = head;

    while(ptr != NULL) {
        printf("%d\n", ptr -> data);
        ptr = ptr -> next;
    }
    
    return 0;
}