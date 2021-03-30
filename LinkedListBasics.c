/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head = NULL;

void insert(int value)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

void insertend(int value)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->data = value;
    new_node->next = NULL;
    temp->next = new_node;
}

void deletebykey(int value)
{
    struct node* prev = NULL;
    struct node* temp = head;
    
    if(temp!=NULL && temp->data==value)
    {
        head = temp->next;
        free(temp);
        return;
    }
    
    while(temp != NULL)
    {
        prev = temp;
        if(temp->data == value)
        {
            break;
        }
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}

void deleteend()
{
    struct node* prev = NULL;
    struct node* temp = head;
    while(temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}

void print()
{
    struct node* temp = head;
    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(5);
    insertend(40);
    deletebykey(5);
    deletebykey(20);
    deleteend();
    print();
}
