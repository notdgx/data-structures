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


// things to manage : size = 0,1 ; 

// 1. insert at 0,end when size = 0 ; 
// 2. insert at 0,end ; 
// 3. insert at pos ; 
// 4. insert at pos when s = 0; 
// 5. is malloc working ; 
// 6. insert at beg and end when size =! 0 , 1

int  insert_at_pos(struct node ** beg,struct node ** end,int data,int pos){
 
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}

    new_node->data = data;
    new_node->pre_ptr = NULL;
    new_node->nxt_ptr = NULL;

    int s = fn_size(*beg,*end);

    if(pos>s){return 0;}

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
        if (pos == 0){ // if the user want to put bfore the single eleement 
            (*beg)->pre_ptr = new_node; 
            new_node->nxt_ptr = (*beg); // size 1 and beg
            (*beg) = new_node;
            return -2;
        }

        if (pos == 1){ // if the user want to put afete the single element
            (*beg)->nxt_ptr = new_node;
            (new_node)->pre_ptr = (*beg); // size 1 and beg
            (*end) = new_node;
            return -3;
        }
    }

    struct node * temp;

    // if the user want to add at beg and end if size not =! 0 , 1
    if ((s!=0)&&(s!=1)) {
        if (pos==0){
            new_node->nxt_ptr = (*beg);
            (*beg)->pre_ptr = new_node;
            (*beg) = new_node ;
            return -4;
        }
        else if (pos == s){
            (new_node)->pre_ptr  = (*end);
            (*end)->nxt_ptr = (new_node);
            (*end) = new_node;
            return -7;
        }
    }



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
        return -5;

    }
    else { //  traverse form the end
        temp = (*end);
        for(int i = 0; i<s-1-pos; i++){
            temp=temp->pre_ptr;
        }
        new_node->pre_ptr = temp->pre_ptr;
        new_node->nxt_ptr = temp;
        temp->pre_ptr->nxt_ptr = new_node;
        temp->pre_ptr = new_node; 
        return -6;
    }


    return 0;

}



//  DELETE 

// case to handel : empty ; 

// 1. empty & pos 0,end or N ;
// 2. s = 1 , pos is x , 0 ,end ;  
// 3. s > 1 , 0 , end ; 
// 4. s > 1 , pos ;


int delete_at_pos(struct node ** beg,struct node ** end,int pos){

    int s = fn_size((*beg),(*end));
    
    if ((pos < 0) || (pos >= s && !(s == 1 && pos == 1))){ // 1. size is 0 and size = 1 or pos >1 ( 1. & 2. ) 
        return 0;
    }

    if ((s==1) && (((pos == 0) || (pos==1)))){ //  2. if size = 1 ,ans pos is the beg 
        free((*beg));
        (*beg)=NULL;
        (*end)=NULL;
        return 1;
    } 

    
    struct node * temp;

    // 3. size is != 0,1 and pos is 0,end

    if (pos == 0){
        temp= (*beg)->nxt_ptr;
        temp->pre_ptr = NULL;
        free((*beg));
        (*beg)= temp;
        return -1;
    }
    else if (pos == s-1){
        temp = (*end)->pre_ptr;
        temp->nxt_ptr = NULL;
        free((*end));
        (*end) = temp;
        return -5 ;
    }



    // 4. if the size != 0,1 and pos n

    if (pos < s/2) { // traverse from beg
        temp = (*beg);
        for (int i = 0 ; i < pos ; i++ ){
            temp=temp->nxt_ptr; 
        }
    temp->pre_ptr->nxt_ptr = temp->nxt_ptr;
    temp->nxt_ptr->pre_ptr = temp->pre_ptr;
        free(temp);
        return -2;
    }
    else { // traverse from end
        temp = (*end);
        for (int i = 0 ; i < s - 1 - pos ; i++ ){
                temp=temp->pre_ptr; 
        }
        temp->pre_ptr->nxt_ptr = temp->nxt_ptr; 
        temp->nxt_ptr->pre_ptr = temp->pre_ptr;
        free(temp);
        return -3;
    }

    return -4;

}




// SEARCH 

// 1. if empty -> -1
// 2. if found then index 
// 3. if not found then -2


int search(struct node * beg,int data){ 
    if (beg ==  NULL){
        return -1;
    }
    int i = 0;
    while(beg!=NULL){
        if (beg->data == data){break; return i;}
        i++;
        beg = beg->nxt_ptr;
    }
    return -2;
}

// SORT 

// 1. if done then 1
// 2. if empty then 0 or malloc fail


int sort(struct node ** beg,struct node ** end){
    if (((*beg) == NULL) && ((*end) == NULL)){ // EMPTY
        return 0;
    }

    int s = fn_size(*beg,*end);
    int * arr = (int *)(malloc(sizeof(int) *s)); 
    if (arr == NULL){return 0;}

    // copting form the ll too arr 
    struct node * temp = (*beg);
    for (int i = 0; i < s; i++){
        arr[i] = (temp)->data;
        (temp) = temp->nxt_ptr;
    }
    temp = (*beg); // RESET IT FOr FURTENR SORTED COPY 

    // INSERTION SORT 

        for (int i = 0; i < s - 1; i++) {
        for (int j = i + 1; j > 0; j--) {   
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else {break;}
        }}

    // COPY THEM BACK 
    for(int i =0;i<s;i++){
        temp->data = arr[i];
        temp=temp->nxt_ptr;
    }
    free(arr);
    return 1;
}

// SHOW 

// 1. if no data : no data 
// if one element : then special prient 
// if n > 1 ; while loop ; 

void show(struct node * beg,struct node * end){
    if (beg == NULL){
        printf("No DATA");
        return ;
    }

    if ((end == beg) && (end->pre_ptr == NULL) && (beg->nxt_ptr== NULL)){
        printf("|b>  %3d  <e|",beg->data);
        return;
    }
    
    int i = 0;
    printf("|b>   %3d   <%d|",beg->data,i);
    beg=beg->nxt_ptr;
    i++;
    while(beg->nxt_ptr!=NULL){
        printf("| >   %3d   <%d|", beg->data,i);
        beg = beg->nxt_ptr;
        i++;
    }
    printf("|e>   %3d   <%d|",beg->data,i);
    return;
}



int is_empty(struct node * beg,struct node * end){
    if (fn_size(beg,end) == 0){return 1;}
    return 0;
}

// CLEAR THE LL 

int clear_ll(struct node ** beg,struct node ** end){
    if (((*beg) == NULL) && ((*beg) == (*end))){
        return 0;
    }

    struct node * temp ;
    while((*beg)!= NULL){
        temp = (*beg);
        (*beg) = (*beg)->nxt_ptr;
        free(temp);
    }
    (*beg) = NULL;
    (*end) = NULL;
    return 1;
}


int main(){

    struct node * beg = NULL;
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

         /// INSERT AT BEG 

            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&beg,&end,input_val,0);

            if (out == -1)
                printf("%d inserted and init a new linked list size is 1 \n",input_val);

            else if (out == -2)
                printf("inserted %d at beg and size of linked list size is 2\n",input_val);
            else if (out == -4)
                printf("inserted %d at beg\n",input_val);
            else // zero 
                printf("cant insert\n");

            break;


        case 2:

        /// INSERT AT END 

            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_pos(&end,&beg,input_val,fn_size(beg,end));

            if (out == -1)
                printf("%d inserted and init a new linked list size is 1 \n",input_val);
            else if (out == -3)
                printf("%d inserted at end and linked list size is 2 \n",input_val);
            else if (out == -7)
                printf("%d inserted at end \n",input_val);
            else
                printf("cant insert\n");

            break;


        case 3:

        // DEELTE AT BEG

            out = delete_at_pos(&beg,&end,0);

            if (out == -1)
                printf("Deleted value\n");
            else if (out == 1)
                printf("Linked List Reset \n");
                
            else if (out == 0)
                printf("cant delete \n");

            break;


        case 4:

         /// DELETE AT END

            out = delete_at_pos(&end,&beg,fn_size(beg,end));

            if (out == -5)
                printf("Deleted value\n");
            else if (out == 1)
                printf("Linked List Reset \n");
                
            else if (out == 0)
                printf("cant delete \n");

            break;


        case 5:

            printf("Enter the number insert : ");
            scanf("%d", &input_val);

            printf("Enter the position to insert : ");
            scanf("%d", &pos);

            out = insert_at_pos(&beg,&end,input_val,pos);

            if (out == -1)
                printf("%d inserted and new linked list created \n",input_val);

            else if (out == -2)
                printf("%d inserted before the single element \n",input_val);

            else if (out == -3)
                printf("%d inserted after the single element \n",input_val);

            else if (out == -4)
                printf("%d inserted at beg \n",input_val);
            else if (out == -7)
                printf("%d inserted at end \n",input_val);

            else if (out == -5)
                printf("%d inserted at position (b->e) %d \n",input_val,pos);

            else if (out == -6)
                printf("%d inserted at position (b<-e) %d \n",input_val,pos);
            else
                printf("cant insert\n");

            break;


        case 6:

            show(beg,end);

            printf("\nEnter the position to delete : ");
            scanf("%d", &pos);

            out = delete_at_pos(&beg,&end,pos);

            if (out == 1)
                printf("Linked List %d\n",pos);

            else if (out == -1)
                printf("%d deleted the first position \n",pos);
            else if (out == -5)
                printf("%d deleted the last position \n",pos);

            else if (out == -2)
                printf("deleted the element (b->e)\n");
            else if (out == -3)
                printf("deleted the element (b<-e) \n");
            else
                printf("Cant Delete\n"); // zero or unvalid pos

            break;


        case 7:

            out = is_empty(beg,end);

            if (out == 1)
                printf("Empty\n");

            else
                printf("Not empty \n");

            break;


        case 8:

            show(beg,end);
            break;


        case 9:

            printf("%d is the size of Linked List ",fn_size(beg,end));
            break;


        case 10:

            printf("Enter the element to search : ");
            scanf("%d", &input_val);

            out = search(beg,input_val);

            if (out == -1)
                printf("No data  \n");

            else if (out == -2)
                printf("Element Not Found\n");

            else
                printf("Element Found at %d \n",out);

            break;


        case 11:

            out = clear_ll(&beg,&end);

            if (out == 1)
                printf("Cleared \n");

            else
                printf("Cant Clear \n");

            break;


        case 12:

            if (is_empty(beg,end) != 1)
                show(beg,end);

            out = sort(&beg,&end);

            if (out == 1){
                printf("\nSorted\n");
                show(beg,end);
            }
            else
                printf("Cant Sort \n");

            break;


        case 0:

            printf("exitting ...\n");

            if (beg != NULL)
                clear_ll(&beg,&end);

            return 0;


        default:

            printf("Invalid choice\n");

        }
    }


    return 0;
}

