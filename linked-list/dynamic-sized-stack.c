#include <stdio.h>
#include <alloca.h>


// FUCNTIONS TO HANDEL NODES AND POINTERS 


struct node{
    int data;
    struct node * nxt_ptr;
};


// so what is happening hwerr sis null is not a object pointer 
// so if we jsut use the pointer with * it will jsut copies the pointer to waht it is ponting to here for 0 nodes it is zero
// but by ** we are doing to get the address of the pointer so we can diretly modify the adderss stored at that address (pointer's)
// the pass by pointer is actaully a coping of the address itself  


void add_node(struct node ** ptr, int data){
    *ptr =  malloc(sizeof(struct node));
    (*ptr)->data = data; 
    (*ptr)->nxt_ptr = NULL; 
}

void add_n_nodes(struct node ** ptr, int data, int n){

    for (int i = 0; i< n ; i++){



    }
}


int main(){
    struct node * head;
    int * ptr;



    return 0;
}