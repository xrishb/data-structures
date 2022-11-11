// means visiting each node of list untill last node of list is reached. in general terms it means looping through the list.


// count total numbers of nodes
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};



void count_nodes(struct node *head) {
    int count = 0;
    if(head == NULL) {
        printf("Linked list is empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        count++;
        ptr = ptr -> next;
    }
    printf("%d",count);
}


int main() {

    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 4234;
    current -> next = NULL;
    head -> next = current;

    current = malloc(sizeof(struct node));
    current -> data = 99;
    current -> next = NULL;

    head -> next -> next = current;

    count_nodes(head);

    return 0;
}