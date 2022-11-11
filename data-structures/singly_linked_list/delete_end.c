#include <stdio.h>
#include <stdlib.h>

struct node {
    int data ;
    struct node *next;
};

struct node *pop(struct node *head) {
    if(head == NULL) {
        printf("list is empty!");
    }
    else if(head -> next = NULL)
    {
        free(head);
        head = NULL;
    }
    else 
    {
        struct node *temp = head; 
        struct node *temp2 = head ; 

        while(temp -> next != NULL) {
            temp2 = temp;
            temp = temp -> next;
        }
        temp -> next = NULL;
        free(temp);
    }
}

int main() {
    struct node *head = (struct node * )malloc(sizeof(struct node));
    head -> data  = 23;
    head -> next = NULL;

    struct node *ptr = malloc(sizeof(struct node));
    ptr -> data = 2;
    ptr -> next = NULL;
    head -> next = ptr;

    ptr = head;

    while(ptr!=NULL) {
        printf("%d\n",ptr->data);
        ptr = ptr -> next;
    }

    head =  pop(head);

    while(ptr!=NULL) {
        printf("%d\n",ptr->data);
        ptr = ptr -> next;
    }

    return 0;
}