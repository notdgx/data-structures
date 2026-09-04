// CIRCULAR AND SIMPLEY LINEKLD LIST 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};

//
// | | -> | | -> | | -> | | -> |e|
//  ^                           ^
//  | <----------------------- |
// beg                        end
//

int fn_size(struct node *end);

int insert_at_pos(struct node ** end,int data,int pos){

    int size = fn_size((*end));
    if (!((pos>=0) && (pos<=size))){return 0;}

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    // if the ll is empty and adding at beg
    if (size == 0){                
        (*end)->nxt_ptr = new_node;
        (*end) = new_node;
        return -1;    }

    //if the insert at beg
    if (pos == 0){
        new_node->nxt_ptr = (*end)->nxt_ptr;
        (*end)->nxt_ptr = new_node;
        return -2;
    }

    // if insert at end
    if (pos == size){
        new_node->nxt_ptr = (*end)->nxt_ptr; // adding the beg to new node
        (*end)->nxt_ptr = new_node;
        (*end) = new_node; // new end
        return -3;
    }

    struct node * temp = (*end)->nxt_ptr;
    for (int n= 0;n<pos-1;n++){ // we are doing ti because we havin temp hs nxtptr so like if we want to insert at 3 , 
        // we need to have the the temp ahving the address or 2nd pos 
        // because 2nd will have the addfress of 3rd pos waht er want to modify ,  
        // it will run for 0,1 
        // after 0 the temp = 1 , temp->nxt_ptr = 2
        // after 0 the temp = 2 , temp->nxt_ptr = 3
        // so we have to loop it pos -2 times as we are doing by -1 and <

        temp = temp->nxt_ptr;
    }
    new_node->nxt_ptr= temp->nxt_ptr; // so we are making new node nxt ptr to the prev3 pos node
    temp->nxt_ptr = new_node; // and then updating it 
    return 1;
}


int delete_at_pos(struct node ** end,int pos){

    int size = fn_size((*end));
    if (!((pos>=0) && (pos<=size))){return 0;} // not valid pos
    if (size == 0){return -1;} //if empty

    if (pos==0){ //deleted beg
        struct node * temp = (*end)->nxt_ptr; // beg
        (*end)->nxt_ptr = temp->nxt_ptr; // updating the new beg
        free(temp); //delete the beg
        return -2;
    }

    if (pos==size-1){
        struct node * temp = (*end)->nxt_ptr; //beg
        while(temp->nxt_ptr!=(*end)){ //traverse upto end - 1 node 
            temp=temp->nxt_ptr;
        }
        temp->nxt_ptr = (*end)->nxt_ptr; // end - 1 node ->nxt_ptr = beg 
        free((*end)); //free end
        (*end) = temp; // new end
        return -3;
    }

    struct node * temp = (*end)->nxt_ptr; // beg
    for(int i=0;i<pos-1;i++){ // upto pos -2 so  temp has ptr to pos node -1 and its nxtptr has the posptr  
        temp=temp->nxt_ptr;
    }
    // temp->nxt_ptr = temp->nxt_ptr->nxt_ptr ; we cant do this what if we had a while loop because we cant determin whetehr the nxt prt has a valid node or not
    //but beacuse of the size -1 conndtion it is granteed that temp-nt ptr has a node 
    struct node * temp2 = temp->nxt_ptr;
    temp->nxt_ptr = temp->nxt_ptr->nxt_ptr;
    free(temp2);
    return 1;

}
