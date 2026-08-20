#include <stdio.h>
#include <alloca.h>
#include <stdlib.h>


// FUCNTIONS TO HANDEL NODES AND POINTERS 


struct node{
    int data;
    struct node * nxt_ptr;
};


// so what is happening hwerr sis null is not a object pointer 
// so if we jsut use the pointer with * it will jsut copies the pointer to waht it is ponting to here for 0 nodes it is zero
// but by ** we are doing to get the address of the pointer so we can diretly modify the adderss stored at that address (pointer's)
// the pass by pointer is actaully a coping of the address itself  


int add_node(struct node ** head, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    if (*head == NULL){
        *head = new_node;
        return 1;
    }

    struct node * temp = *head;
    while (temp->nxt_ptr != NULL)
    {
        temp = temp->nxt_ptr;
    }

    temp->nxt_ptr = new_node;
    return 1;

}



void print_data(struct node * ptr){
    if (ptr == NULL){
        printf("NO DATA");
        return;
    }
    
    int i=0;

    while (1){
        printf("DATA AT %d NODE : %d\n",i,ptr->data);
        i++;
        if (ptr->nxt_ptr == NULL){return;}
        ptr=ptr->nxt_ptr;
    }

}


int main(){
    struct node * head = NULL;
    add_node(&head,10);
    add_node(&head,10);
    add_node(&head,100);
    add_node(&head,90);
    add_node(&head,10);
    print_data(head);


    return 0;
}