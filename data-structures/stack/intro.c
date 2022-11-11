// contains push
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
} *top = NULL;

struct node *push(struct node *head, int data) {
    struct node *newNode;
    newNode = malloc(sizeof(struct node));

    if(newNode == NULL) {
        printf("stack overflow!");
        exit(1);
    }

    newNode -> data = data;
    newNode -> next = NULL;

    newNode -> next = top;
    top = newNode;
}

int main(){

    return 0;
}