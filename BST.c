/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdint.h>

struct node
{
    int key;
    struct node *right;
    struct node *left;
};

struct node* createNode(int data)
{
    struct node* local = (struct node*)malloc(sizeof(struct node));
    local->key = data;
    local->left = NULL;
    local->right = NULL;
    return local;
}

struct node* insert(struct node* temp, int key)
{
    if(temp == NULL)
        return createNode(key);
    if(key < temp->key)
        temp->left = insert(temp->left, key);
    if(key > temp->key)
        temp->right = insert(temp->right, key);
    return temp;
}

struct node* search(struct node* temp, int key)
{
    if(temp == NULL || temp->key == key)
        return temp;
    if(key < temp->key)
        return search(temp->left, key);
    if(key > temp->key)
        return search(temp->right, key);
}

void printTree(struct node* temp)
{
    if(temp!=NULL){
    printTree(temp->left);
    printf("In tree: %d\n",temp->key);
    printTree(temp->right);
    }
}

int main()
{
    printf("BST implementation\n");
    struct node* root = NULL;
    root = insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    
    struct node* found = NULL;
    found = search(root, 50);
    if(found ==  NULL) printf("Found: False\n");
    else printf("Found: %d\n", found->key);
    
    printTree(root);
    return 0;
}
