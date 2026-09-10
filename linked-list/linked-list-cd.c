#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * pre_ptr;
    struct node * nxt_ptr;
}; // doubly linked list node 

// |beg | -> | | -> | | -> | | -> |beg|
// |end| <- | | <- | | <- | | <- |end |
//                                 ^
//                                 |
//                                end

// 1. FN_SIZE 

int fn_size(struct node * end){
    // if the size is 0
    if(end==NULL){
        return 0;
    } 
    int i = 0;
    struct node * temp = end->nxt_ptr;
    // beacuse temp==end at 1st
    do{
        temp=temp->nxt_ptr;
        i++;
    }
    while(temp!=end);
    return i;
}



// 6. IS EMPTY

int is_empty(struct node * end){
    // empty
    if(end==NULL){
        return 1;
    }
    return 0;
}



// 4. SEARCH 

int search(struct node * end,int data){
    // Empty
    if (end == NULL){
        return -1; 
    }

    // TRAVERSE AND COMPARE
    struct node * temp = end->nxt_ptr;
    struct node *beg = temp;
    int i = 0;
    do{
        if(temp->data == data){
            return i;
        }
        i++;
        temp = temp->nxt_ptr;
    }while(temp!=beg);

    // not found
    return -2;
}


// 5. SHOW

void show(struct node * end){
    // empty
    if (end == NULL){
        printf("No DATA\n");
        return;
    }

    // 1 elements
    if ((end->nxt_ptr == end)){
        printf("|b>  %3d  <e|",end->data);
        return;
    }

    // N elements
    int i = 0;
    struct node * beg = end->nxt_ptr;
    
    // print beg with tag
    printf("|b>   %3d   <%d|",beg->data,i);
    i++;
    beg=beg->nxt_ptr;
    
    // internal elements
    while(beg->nxt_ptr!=end){
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }

    // print end with tag
    printf("|e>   %3d   <%d|",beg->data,i);
    return;

}


// 7. CLEAR LL 

int clear_ll(struct node **end){
    //empty
    if (*end == NULL)
        return 0;

    struct node *beg = (*end)->nxt_ptr;
    struct node *temp;


    while (beg != (*end)){
        temp = beg;
        beg = beg->nxt_ptr;
        free(temp);
    }

    free((*end));
    (*end) = NULL;

    return 1;


    //     do {
    //     temp = beg;
    //     beg = beg->nxt_ptr;
    //     free(temp);
    // } while (beg != *end);

    // free(*end);
    // *end = NULL;

    // we can t do this one becasue it will do good for ll the cases except 1 becassue it will then free it twice
}


// 2. INSERT AT POS 

int insert_at_pos(struct node ** end,int data, int pos){
    // emtpy && pos is > 0
    if (((*end) == NULL) && (pos > 0)){
        return 0; 
    }

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    new_node->pre_ptr = NULL;


    // if empty and init new ll
    if ((((*end) == NULL) && (pos == 0))){
        (*end) = new_node;
        new_node->nxt_ptr = new_node;
        new_node->pre_ptr = new_node;
        return -1;
    }

    int s = fn_size((*end)); // it can t be empty as per now
    struct node * beg = (*end)->nxt_ptr;

    if ((s == 1) && (pos > 1)){
        return -2; // not valid
    }
    else if ((s == 1) && (pos == 0)){
            // add at the beg of the single node 
            (*end)->pre_ptr = new_node;
            new_node->pre_ptr = (*end);
            new_node->nxt_ptr = (*end);
            (*end)->nxt_ptr = new_node; // beg 
            return -3;
        }
    else if ((s == 1) && (pos == 1)){
            // // add at end of single node
            // (*end)->nxt_ptr = new_node; // current single node
            // new_node->pre_ptr = (*end); // current single node  address ie beg
            // new_node->nxt_ptr = (*end);
            // (*end) = new_node ; // update the new node
            
            struct node *old_end = *end;
            
            old_end->nxt_ptr = new_node;
            old_end->pre_ptr = new_node;
            new_node->pre_ptr = old_end;
            new_node->nxt_ptr = old_end;
            
            *end = new_node;
            return -4;
    }

    // non empyt and non size == 1

    // add at beg of size n ll
    if (pos==0){
        struct node * beg = (*end)->nxt_ptr;
        beg->pre_ptr = new_node;
        new_node->nxt_ptr = beg;
        new_node->pre_ptr = (*end);
        (*end)->nxt_ptr = new_node;
        return -5;
    }
    // insert at end
    else if (pos==s){
        new_node->nxt_ptr = (*end)->nxt_ptr;
        new_node->pre_ptr = (*end);
        (*end)->nxt_ptr = new_node;
        (*end) = new_node; // add at the end
        return -6;
    }
    else if (pos < (s/2)){ 
        // traverse from beg
        struct node * beg = (*end)->nxt_ptr;
        for (int i = 0 ; i < pos -1 ; i++){
            beg=beg->nxt_ptr;   
        }
        new_node->nxt_ptr = beg->nxt_ptr;
        beg->nxt_ptr->pre_ptr = new_node;
        beg->nxt_ptr = new_node;
        new_node->pre_ptr = beg;
        return -7;
    }
    else if (pos >= (s/2)){
        // traverse from end
        struct node * temp = (*end);
        for (int i = 0 ; i < s - pos - 1 ; i++){
            temp= temp->pre_ptr;   
        }
        new_node->pre_ptr = temp->pre_ptr;
        temp->pre_ptr->nxt_ptr = new_node;
        new_node->nxt_ptr = temp;
        temp->pre_ptr = new_node;
        return -8;
    }

    return -9;
    
}


// 3. DELETE AT POS 

int delete_at_pos(struct node ** end,int pos){
    int s = fn_size((*end));
    // if empty and pso > size
    if (((*end) == NULL) || (pos>=s) ){
        return 0;
    }

    if ((s == 1) && (pos > 1)){
        return -1;
    }
    else if ((s == 1) && ((pos == 0) || (pos == 1))){
        free(*end);
        (*end) = NULL; //RESET 
        return -2;
    }

    if ((s>1) && (pos==0)){
        struct node * beg = (*end)->nxt_ptr;
        (*end)->nxt_ptr = beg->pre_ptr;
        beg->pre_ptr->pre_ptr = (*end);
        free(beg);
        // remove from the beg
        return -3;
    }
    else if ((s>1) && (pos==1)){
        struct node * temp = (*end);
        (*end)->nxt_ptr->pre_ptr = (*end)->pre_ptr;
        (*end)->pre_ptr->nxt_ptr = (*end)->nxt_ptr;
        (*end)=(*end)->pre_ptr;
        free(temp);
        // return form the end
        return -4;
    }

    // pos in bw 

    if (pos < s/2){
        struct node * beg = (*end)->nxt_ptr;
        for(int i = 0; i < pos  ; i++){ // not using -1 now the pos lie in the beg after the loop not beg->nxtptr
            beg = beg->nxt_ptr;
        }
        beg->pre_ptr->nxt_ptr = beg->nxt_ptr;
        beg->nxt_ptr->pre_ptr = beg->pre_ptr;
        free(beg);
        return -5; // from b-> pos 
    }
    else if (pos > s/2){
        struct node * temp = (*end);
        for(int i = 0; i < s - pos; i++){ 
            temp=temp->pre_ptr;
        }
        temp->pre_ptr->nxt_ptr = temp->nxt_ptr;
        temp->nxt_ptr->pre_ptr = temp->pre_ptr;
        free(temp); return -6;
    }

    return -7;
}


// 8. SORT 

int sort(struct node ** end){
    if ((*end) == NULL){
        return 0;
    }
    int s = fn_size((*end));
    int * arr = (int *)(malloc(sizeof(int)*s));
    if (arr == NULL){return 0;} // if malloc fails

    struct node * temp = (*end)->nxt_ptr;
    for (int i = 0; i<s ; i++){
        arr[i]=temp->data;
        temp=temp->nxt_ptr;
    }
    temp=(*end)->nxt_ptr; //for renter the sorted values in same ll

   // insertion sort
    for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j > 0; j--) {   
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {break;}
        }
    }

    for(int i =0;i<s;i++){ //updating sorted value in the same ll
        temp->data = arr[i];
        temp=temp->nxt_ptr;
    }
    free(arr);
    return 1;


}



int main (){

    struct node * end = NULL;

    int choice,input_val,out,pos;

    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : insert at beg\n");
        printf("2 : insert at end\n");
        printf("3 : delete at beg\n");
        printf("4 : delete at end\n");
        printf("5 : insert at pos\n");
        printf("6 : delete at pos\n");
        printf("7 : isempty\n");
        printf("8 : show\n");
        printf("9 : size\n");
        printf("10 : search\n");
        printf("11 : clear\n");
        printf("12 : sort\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

        // INSERT AT BEG
            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,0);
            if (out == -3)
                printf("%d inserted at beg of the linked lis of size 1 \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -5)
                printf("%d inserted at beg \n", input_val);
            else if (out == -2)
                printf("not valid \n");
            else // 0 
                printf("cant insert\n");
            break;

        case 2:

        // INSERT AT END
            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,fn_size(end));
            if (out == -4)
                printf("%d inserted at the end of linked list of size 1\n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -6)
                printf("%d inserted at end \n", input_val);
            else if (out == -2)
                printf("not valid \n");
            else // 0 
                printf("cant insert\n");
            break;

        case 3:

        // DELETE AT BEG
            out = delete_at_pos(&end,0);

            if (out == -3)
                printf("Deleted value at beg\n");
            else if (out == -1)
                printf("No Data \n");
            else if(out == -2 )
                printf("Linked List Reset \n");
            else if (out == -1 )
                printf("Invalid \n");
                else // 0 
                printf("cant delete \n"); 
            break;

        case 4:
        // DELTE AT END
            out = delete_at_pos(&end,fn_size(end)-1);

            if (out == -4)
                printf("Deleted value at end\n");
            else if (out == -2 )
                printf("Linked List Reset \n");
            else if (out == -1 )
                printf("Invalid \n");
            else // 0  
                printf("cant delete \n");
            break;

        case 5:


        // INSERT AT POS 
            printf("Enter the number insert : ");
            scanf("%d", &input_val);

            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,input_val,pos);

            if (out == -7)
                printf("%d inserted at %d (b->pos) \n", input_val,pos);
            else if (out == -8)
                printf("%d inserted at %d (pos<-e) \n", input_val,pos);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -5)
                printf("%d inserted at beg \n", input_val);
            else if (out == -6)
                printf("%d inserted at end \n", input_val);
            else if (out == -3)
                printf("%d inserted at beg of sigle node\n", input_val);
            else if (out == -4)
                printf("%d inserted at end of sigle node\n", input_val);
            else if (out == -2) // 
                printf("not valid \n");
            else // 0 
                printf("cant insert\n");
            break;

            
        case 6:
            // DELETE AT POS 

            show(end);

            out = is_empty(end);

            if (out == 1){
                break;
            }

            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,input_val);

            if (out == -5)
                printf("%d Deleted (b->pos) \n", input_val);
            else if (out == -6)
                printf("%d Deleted (pos<-end) \n", input_val);
            else if (out == -3)
                printf("%d deleted the beg \n", input_val);
            else if (out == -4)
                printf("deleted the end \n");
            else if (out == -2)
                printf("Resseted the ll\n");
            else if (out == -1 )
                printf("Invalid \n");
            else // 0 
                printf("Empty \n");
            break;

        case 7:
            out = is_empty(end);

            if (out == 1)
                printf("Empty\n");
            else
                printf("Not empty \n");
            break;

        case 8:
            show(end);
            break;

        case 9:
            printf("%d is the size of Linked List ", fn_size(end));
            break;

        case 10:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);

            out = search(end,input_val);

            if (out == -1)
                printf("No data  \n");
            else if (out == -2)
                printf("Element Not Found\n");
            else
                printf("Element Found at %d \n",out);

            break;

        case 11:
            out = clear_ll(&end);

            if (out == 1)
                printf("Cleared \n");
            else
                printf("Already empty \n");

            break;

        case 12:
            if (is_empty(end) != 1){
                show(end);
            }

            out = sort(&end);

            if (out == 1){
                printf("\nSorted\n");
                show(end);
            }
            else
                printf("Cant Sort \n");

            break;

        case 0:
            printf("exitting ...\n");
            clear_ll(&end);
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}