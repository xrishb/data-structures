#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};


struct node *push_cp(struct node *head, int data, int pos) {
    struct node *ptr = head;
    struct node *ptr2 = malloc(sizeof(struct node));
    ptr2 -> data = data;
    ptr2 -> next = NULL;

    pos--;
    while(pos != 1) {
        ptr = ptr -> next;
        pos--;
    }
    ptr2 -> next = ptr -> next;
    ptr -> next = ptr2;
}

int main () {

    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> data = 53;
    head -> next = NULL;

    int data = 13, pos = 3;

    push_cp(head, data, pos);
    struct node *ptr = head;
    

    while(ptr != NULL) {
        printf("%d", ptr -> data);
        ptr = ptr -> next;
    }
    return 0;
}