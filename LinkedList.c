/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

typedef struct Node
{
    int data;
    struct node* next;
}node;

node* removeHead(node* head)
{
    node *temp = NULL;
    temp = (node*)malloc(sizeof(node));
    temp = head->next;
    return temp;
}

node* insertStart(node* head)
{
    node *temp = NULL;
    temp = (node*)malloc(sizeof(node));
    temp->data = 20;
    temp->next = head;
    head = temp;
    return head;
}

node* createList(int n)
{
    printf("Create list\n");
    int i = 0;
    node* p = NULL;
    node* temp = NULL;
    node* head = NULL;
    for(i = 0; i<n ; i++)
    {
        printf("i = %d\n",i);
        temp = (node*)malloc(sizeof(node));
        temp->data = i+5;
        printf("temp->data = %d\n",temp->data);
        if(head ==  NULL)
        {
            head = temp;
        }
        else
        {
            p = head;
            while(p->next != NULL)
                p = p->next;
            p->next = temp;
        }
    }
    return head;
}

void printList(node* head)
{
    printf("Print list\n");
    while(head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main()
{
    int n;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    node* HEAD = NULL;
    HEAD = createList(n);
    //HEAD = insertStart(HEAD);
    HEAD = removeHead(HEAD);
    printList(HEAD);
    return 0;
}
