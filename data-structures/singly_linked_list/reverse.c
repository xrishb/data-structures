#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


int main() {
    struct node *head = malloc(sizeof(struct node));
    
    return 0;
}