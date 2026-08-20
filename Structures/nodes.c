#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};
void add_at_end(struct node *head , int data)
{
    struct node *ptr ,*temp;
    if(head == NULL)
    {
        printf("the linked list is empty");
    }
    temp = malloc(sizeof(struct node));
    temp-> data = data;
    temp-> link = NULL;

    ptr = head;
    while(ptr!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link = temp;
    //ptr=temp;
    
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
    add_at_end(head,10);

    print_nodes(head);
    
    

};