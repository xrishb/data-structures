#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

void print_data(struct node *head) {
    if(head == NULL) {
        printf("linked list is empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        printf("%d\n",ptr -> data);
        ptr = ptr -> next;
    }
}

void count_nodes(struct node *head) {
    int count = 0;
    if(head == NULL) {
        printf("List is empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr!=NULL) {
        count++;
        ptr = ptr -> next;
    }
    printf("total nodes : %d \n",count);
}

int main() {
    struct node *head = malloc(sizeof(struct node));
    head -> data = 34;
    head -> next = NULL;

    struct node *current = malloc(sizeof(struct node)); 
    current -> data =  2345;
    current -> next = NULL;
    head -> next = current;

    current = malloc(sizeof(struct node));
    current -> data = 5543;
    current -> next = NULL;


    head -> next -> next  = current;

    print_data(head);
    count_nodes(head);

    return 0;
}