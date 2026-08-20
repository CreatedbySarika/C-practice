#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
void print_nodes(struct node *head)
{
    if (head == NULL)
    {
        printf("The linked list is empty");
    }
    //*ptr = malloc(sizeof(struct node));
    struct node *ptr = NULL;
    ptr = head;

    while (ptr!= NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
};


int main(){

    struct node *head = malloc(sizeof(struct node));
    head -> data = 5;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data =6;
    current -> link = NULL;
    head->link = current;

    print_nodes(head);
    
    

};