#include <stdio.h>
#include <alloca.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * pre_ptr;
};

int add_node(struct node ** top, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    
    if (*top == NULL){
        new_node->pre_ptr = NULL;
        *top = new_node;
        return 1;
    }

    new_node->pre_ptr = *top;
    *top = new_node;
    return 1;
}


int pop_node(struct node **top)
{
    if (*top == NULL)
        return 0;

    struct node *temp = (*top)->pre_ptr;
    free(*top);
    *top = temp;
    return 1;
}



int main(){}