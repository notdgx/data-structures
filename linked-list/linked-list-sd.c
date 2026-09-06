#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * pre_ptr;
    struct node * nxt_ptr;
}; // doubly linked list node 

// |beg | -> | | -> | | -> | | -> |NULL|
// |NULL| <- | | <- | | <- | | <- |end |
//  ^                           ^
//  |                           |
// beg                         end


// size fn 

int fn_size(struct node * beg, struct node * end){
    if ((beg)==NULL && (end)==NULL){
        return 0;
    } // size is zero 
    int i = 0;
    while(beg!=NULL){
        i++;
        beg=beg->nxt_ptr;
    }
    return i;
}


// things to manage : size = 0,1 ; insert at 0,end when size = 0 ; insert at 0,end ; insert at pos ; insert at pos when s = 0; is malloc working 

int  insert_at_pos(struct node ** beg,struct node ** end,int data,int pos){
 
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}

    new_node->data = data;
    new_node->pre_ptr = NULL;
    new_node->nxt_ptr = NULL;

    int s = fn_size(*beg,*end);


    if ((s == 0) && ((pos == 0) || (pos !=0))){  // it will manage the size  = 0 , and if size and pos = 0 and whatever pos when size =0 , abd end ie end will be calacuated by the fn_size while passing argunment 
        // beg 
        (*beg)=new_node;
        (*beg)->pre_ptr = NULL;
        (*beg)->nxt_ptr = NULL;
        
        //end
        (*end)=new_node;
        (*end)->pre_ptr = NULL;
        (*end)->nxt_ptr = NULL;

        return -1;
    }
    
    if (s == 1){ // if hte isze is one both are pointing to a single node with that node nxt and pre = null
        if (pos == -1){ // if the user want to put bfore the single eleement 
            (*beg)->pre_ptr = new_node; 
            new_node->nxt_ptr = (*beg);
            (*beg) = new_node;
            return -2;
        }

        if (pos == -2){ // if the user want to put afete the single element
            (*beg)->nxt_ptr = new_node;
            (new_node)->pre_ptr = (*beg);
            (*end) = new_node;
            return -3;
        }
    }

    struct node * temp;

    // INSERT at pos when size != 0 

    if (pos < s/2){ // traverse form the beg
        temp = (*beg);
        for (int i = 0; i<pos-1; i++){
            temp = temp->nxt_ptr;
        }

        // position:   0       1       2       3
        //    [10] → [20] → [30] → [40]
        //              ↑       ↑
        //            temp     wanted that is why we need -1 
        new_node->nxt_ptr = temp->nxt_ptr;
        new_node->pre_ptr = temp;
        temp->nxt_ptr->pre_ptr = new_node;
        temp->nxt_ptr = new_node; 
        return -4;

    }
    else { //  traverse form the end
        temp = (*end);
        for(int i = 0; i<s-1; i++){
            temp=temp->pre_ptr;
        }
        new_node->pre_ptr = temp->pre_ptr;
        new_node->nxt_ptr = temp;
        temp->pre_ptr->nxt_ptr = new_node;
        temp->pre_ptr = new_node; 
        return -5;
    }
    return 0;

}



//  DELETE 

// case to handel : empty ; empty & pos 0,end or N ; s = 1 , pos ->x , 0 ,end ;  

int delete_at_pos(struct node ** beg,struct node ** end,int pos){

    int s = fn_size((*beg),(*end));
    
    if ((s == 0) && ((s == 1)&&  (pos>1))){
        return 0;
    }

    if ((s==1) && ((pos == 0) || (pos == 1))){ // if hte person usees delete at end the fnsize passes, is use says delete at beg fn size still pass as 1 and it aslo handels the if use enters 0 index 
        free((*beg));
        (*beg)=NULL;
        (*end)=NULL;
        return 1;
    } 

    // if the size != 0,1 and pos n

    struct node * temp;

    if (pos < s/2) { // traverse from beg
        temp = (*beg);
        for (int i = 0 ; i < s-1 ; i++ ){
            temp=temp->nxt_ptr; 
        }
        return -1;
    }
    else { // traverse from end
        temp = (*end);
        for (int i = 0 ; i < s-1 ; i++ ){
                temp=temp->pre_ptr; 
        }

        return -2;
    }

    return -3;

}

