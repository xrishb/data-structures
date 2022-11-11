#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;


struct node *delete(struct node **head, int pos)
{
    struct node *curr = *head;
    struct node *prev = *head;

    if(*head == NULL) {
        printf("list is empty!");
    }
    else if(pos == 1) {
        *head = curr -> next;
        free(curr);
        curr = NULL;
    }
    else {
        while(pos!=1) {
            prev = curr;
            curr = curr -> next;
            pos--;
        }
        prev -> next = curr -> next;
        free(curr);
        curr = NULL;
    }

}
int main() {
    head = malloc(sizeof(struct node));

    head -> data = 24;
    head -> next = NULL;

    return 0;
}