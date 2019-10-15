#include <stdio.h>
#include <stdlib.h>

typedef struct node node;
typedef struct list list;

struct node{
    int val;
    node* next;
};

struct list{
    node* head;
    node* tail;
};

void prepend(list* l, node* n)
{
    if(l->head == NULL){
        l->head = n;
        l->tail = n;
    }
    else{
        n->next = l->head;
        l->head = n;
    }

}

void printList(list* l){
    node* w = l->head;
    
    while(w != NULL){
        printf("%d", w->val);
        w = w->next;
    }
    printf("\n");
}

node* newNode(int val){
    node* n = (node*)malloc(sizeof(node));
    n->val = val;
    n->next = NULL;
    return n;
}

int main()
{
    int i;
    list l;
    l.head = NULL;
    l.tail = NULL;

    for(i=0;i<10;i++)
    {
        prepend(&l, newNode(i));
    }

    printList(&l);
    

}