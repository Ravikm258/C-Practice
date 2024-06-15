#include<stdio.h>
#include<stdlib.h>

struct sll{
    int data;
    struct sll *next;
};
typedef struct sll node;

void insert_node(node **head,int val)
{
    node *new = (node*)malloc(sizeof(node));
    new->data = val;
    if(*head == NULL)
    {
        new->next = NULL;
        (*head)  = new;
    }
    else
    {
        new->next = NULL;
        new->next = (*head);
        (*head) = new;
    }
}

void delete_node(node **head)
{
    node *temp = (*head);
    if((*head) != NULL)
    {
       (*head) = (*head)->next;
       printf("\ndeleted node : %d\n",temp->data);
       free(temp); 
    }
}
void print_list(node **head)
{
    node *temp = (*head);
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
int main()
{
    node *head = NULL;

    insert_node(&head,10);
    insert_node(&head,20);
    insert_node(&head,30);

    print_list(&head);

    delete_node(&head);
    insert_node(&head,120);
    insert_node(&head,340);
    
    print_list(&head);
}