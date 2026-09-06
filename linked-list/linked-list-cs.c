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
        (*end) = new_node;
        (*end)->nxt_ptr = new_node;
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
    if (size == 0){return -1;} //if empty
    if (!((pos>=0) && (pos<size))){return 0;} // not valid pos

    if(size == 1){ //if one eleemnt only reset
        free((*end));
        (*end) =NULL;
        return -4;
    }

    if (pos==0){ //deleted beg
        struct node * temp = (*end)->nxt_ptr; // beg
        (*end)->nxt_ptr = temp->nxt_ptr; // updating the new beg
        free(temp); //delete the beg
        return -2;
    }


    if (pos==size-1){//delete at end
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


int fn_size(struct node *end){
    if (end == NULL){return 0;}
    int i = 0;
    struct node * temp = end->nxt_ptr;

    do {
        i++;
        temp=temp->nxt_ptr;
    }
    while(temp!=end->nxt_ptr);
    return i;
}


int search(struct node * end,int data){
    if (end == NULL){
        return -2;
    }
    int i=0;
    struct node * temp = end->nxt_ptr;
    // if (temp->data == data){ // we cna have do while here 
    //         return i;
    //     }
    // temp=temp->nxt_ptr;
    // i++;
    // while(temp != (end->nxt_ptr)){
    //     if (temp->data == data){
    //         return i;
    //     }
    //     i++;
    //     temp=temp->nxt_ptr;
    // }


    do {
        if (temp->data == data) {
            return i;
        }

        temp = temp->nxt_ptr;
        i++;

    } while (temp != end->nxt_ptr);

    return -1;

}


int sort(struct node **end){

    int s = fn_size(*end);
    if (s == 0){return 0;}// if size == 0
    int * arr = (int *)(malloc(sizeof(int)*s));
    if (arr == NULL){return 0;} // if malloc faisl

    struct node * temp = (*end)->nxt_ptr;
    for (int i = 0; i<s ; i++){
        arr[i]=temp->data;
        temp=temp->nxt_ptr;
    }
    temp=(*end)->nxt_ptr; //for reenter the sorted values in same ll

    for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j > 0; j--) {   
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {break;}
        }}

    for(int i =0;i<s;i++){ //updating sorted value in the same ll
        temp->data = arr[i];
        temp=temp->nxt_ptr;
    }
    free(arr);
    return 1;

}

void show(struct node * end){
    if ((end==NULL)){
        printf("NO DATA");
        return;
    }
    
    struct node * beg = end->nxt_ptr;
    if ((end == beg)){
        printf("|b>  %3d  <e|",beg->data);
        return;
    }
    
    int i = 0;
    printf("|b>   %3d   <%d|",beg->data,i); // first node 
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=end->nxt_ptr){ // will work last node - 1
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %3d   <%d|",beg->data,i); // last node 
    return;
}


int is_empty(struct node * end){
    if (fn_size(end) == 0){return 1;}
    return 0;
}

int clear_ll(struct node ** end){
    if ((*end) == NULL){return 0;}
    struct node * stop = (*end);        
    struct node * curr = stop->nxt_ptr; 
    struct node * temp;

    while (curr != stop){               
        temp = curr;
        curr = curr->nxt_ptr;
        free(temp);
    }
    free(stop);                         
    (*end) = NULL;
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
            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,0); //inser at beg
            if (out == -2)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
        case 2:
            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,input_val,fn_size(end)); //insert at end
            if (out == -3)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
            

        case 3:
            out = delete_at_pos(&end,0); //deelte at beg
            if (out == 1) // sucess
                printf("Deleted value at beg\n");
            else if (out == -1) // no data
                printf("No Data \n");
            else if(out == -4) // reset the ll if one eleemt only
                printf("Linked List Reset \n");
            break;


        case 4:
            out = delete_at_pos(&end,fn_size(end));//delete at end
            if (out == -3) //sucess
                printf("Deleted value at end\n");
            else if (out == -1) //no data 
                printf("No Data \n");
            else if (out == -4)//reset if only one eleement
                printf("Linked List Reset \n");
            break;

        case 5:
            printf("Enter the number insert : ");
            scanf("%d", &input_val);
            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,input_val,pos);
            if (out == 1)
                printf("%d inserted at %d\n", input_val,pos);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -2)
                printf("%d inserted at beg \n", input_val);
            else if (out == -3)
                printf("%d inserted at end \n", input_val);
            else
                printf("cant insert\n");
            break;

        case 6:
            show(end);
            out=is_empty(end);
            if (out == 1){break;}
            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,input_val);
            if (out == 1)
                printf("%d Deleted \n", input_val);
            else if (out == -1)
                printf("no data \n");//if no data
            else if (out == -2)
                printf("%d deleted the beg \n", input_val);
            else if (out == -3)
                printf("deleted the end \n");
            else if (out == -4)
                printf("Resseted the ll\n"); // if onlu one eleemt
            else
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
            if (out == -2)
            printf("No data  \n");
            else if (out == -1)
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
                if (is_empty(end) != 1){show(end);}

                out = sort(&end);

                if (out == 1){
                    printf("\nSorted\n");
                    show(end);}
                else
                    printf("Cant Sort \n");
                break;

            case 0:
            printf("exitting ...\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }    


    return 0;
}