// long method but good for 1-2 nodes

#include <stdio.h>
#include <stdlib.h> // for DMA

struct node{
    int data; // --> 4 bytes value
    struct node* next; // --> also 4 bytes 
};

int main() {
    

    // first node
    struct node *head = (struct node *)malloc(sizeof(struct node)); //typecasted allocated memory
    head -> data = 3;
    head -> next = NULL;

    // second node
    struct node *current = (struct node *)malloc(sizeof(struct node));
    current -> data = 5;
    current -> next = NULL;
    head -> next = current;

    struct node *current2 = (struct node *)malloc(sizeof(struct node));
    current2 -> data = 34;
    current2 -> next = NULL;
    head -> next = current2;

    printf("%d\n",head->data);
    printf("%d\n",current->data);
    printf("%d\n",current2->data);


    return 0;
} 