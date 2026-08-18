// ------------------- LINKED LIST STACK WITH PREVIOUS NODE REFERENCING CHAR STACK 

#include <stdio.h>
#include <stdlib.h>


struct node{
    char data;
    struct node * pre_ptr;
};

int add_node(struct node ** top, char data){

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

int is_empty(struct node *top){
    if (top == NULL){
        return 1;
    }
    else  return 0;
}



int peek_node(struct node *top){
        return top->data;
}




void show_node(struct node * top){
    if (top == NULL){
        printf("NO DATA\n");
        return;
    }

    printf("\n|> %3c <|", top->data);
    top=top->pre_ptr;

    while (top != NULL){

        printf("|  %3c  |", top->data);
        top=top->pre_ptr;
    }
    
}

int stack_size(struct node * top){
    int i=0;
    while (top != NULL){
        i++;
        top=top->pre_ptr;
    }
    return i;
}




// ------------------------- 





int main(){

    struct node * input = NULL;
    struct node * converted = NULL;

    int i = 0;

    printf("Enter the equation :");
    while (1){



    }

    return 0;
}