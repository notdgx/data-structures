#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};


// |b| -> | | -> | | -> | | -> |e|
//  ^                           ^
//  |                           |
// beg                         end


int fn_size(struct node * beg,struct node *end);


int insert_at_beg(struct node ** beg,struct node ** end,int data){ 

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}

    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if ((*beg) == NULL){
        (*beg) = new_node;
        (*end) = new_node;
        return -1;
    }
    // putting a new node nxy ptr to beg and theb beg = new node
    new_node->nxt_ptr = (*beg);
    (*beg) = new_node;
    
    
    return 1;
}


int insert_at_end(struct node ** end,struct node ** beg,int data){
    
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    if (((*end) == NULL) && ((*beg) == NULL)) {
    (*beg) = new_node;
    (*end) = new_node;  
        return -1;
    }
    
    (*end)->nxt_ptr = new_node;
    (*end) = new_node;
    return 1;
}



int insert_at_pos(struct node ** end,struct node ** beg,int data,int pos){
    int n = 0; 
    int size = fn_size((*beg),(*end)) ;
    
    if (!((pos>=0) && (pos<=size))){return 0;}
    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;
    
    // if the ll is empty and adding at beg
    if (size == 0){                
        (*beg) = new_node;
        (*end) = new_node;
        return -1;
    }

    //if the insert at beg
    if (pos == 0){
        new_node->nxt_ptr = (*beg);
        (*beg) = new_node;
        return 1;
    }

    // if insert at end
    if (pos == size){
        (*end)->nxt_ptr = new_node;
        (*end) = new_node;
        return -2;
    }
    
    struct node * temp = (*beg);
    for (n;n<pos - 1;n++){
        temp = temp->nxt_ptr;
    }
    new_node->nxt_ptr = temp->nxt_ptr;
    temp->nxt_ptr = new_node;
    return 1;

}


int delete_at_beg(struct node ** beg,struct node ** end){
    
    if ((*beg) == NULL){
        return 0;
    }

    if (((*beg) == (*end)) && ((*beg)->nxt_ptr == NULL)){
        free((*beg));
        (*beg) = NULL;
        (*end) = NULL;
        return -1;
    }
    
    struct node * temp = (*beg)->nxt_ptr;
    free((*beg));
    (*beg) = temp;
    return 1;
}



int delete_at_end(struct node ** end,struct node ** beg){
    if ((*end) == NULL){
        return 0;
    }
    if (((*beg) == (*end)) && ((*beg)->nxt_ptr == NULL)){
        free((*beg));
        (*beg) = NULL;
        (*end) = NULL;
        return -1;
    }

    struct node * pre = (*beg);
    while(pre->nxt_ptr!=(*end)){
        // pre = temp;
        pre = pre->nxt_ptr;
    }

    pre->nxt_ptr = NULL;
    free((*end));
    (*end) = pre;
    return 1;
}

//so the thing if if size is 5 the
// index rtange os 0 - 4 , if i wnart to add at 2 , then i need
// the temp to hold the ptr of 1st indec becasue it have the next and next ; so i can insert the eleemnt 
//at that poistion change the address of n-1 index and the new node containing the ttemp->nxt_ptr ; FOR deletion we 
//also need the temp to has address of n-1 , temp will have to first get temp->nxtptr->nxtprt address and teh copy it to the temp nxtptr 


// IMPLEEMTAION

// but in fucntion impleemtion i did something weired insert utpo pre , delete upto the actual value then also trcked the pre 


int delete_at_pos(struct node ** end,struct node ** beg,int pos){
    int n = 0; 
    int size = fn_size((*beg),(*end));
    
    if (!((pos>=0) && (pos<=size))){return 0;}
    
    if ((size ==0)){
        return 0;
    }
    
    if (pos == 0){
        return (delete_at_beg(beg, end) == -1) ? -1 : 1;
    }
    if (pos == size - 1){
        return (delete_at_end(beg, end) == -1) ? -1 : 1;
    }
    
    struct node * temp = (*beg);
    struct node * pre = (*beg);
    for (n;n<pos;n++){
        pre=temp;
        temp=temp->nxt_ptr;
    }
    pre->nxt_ptr = temp->nxt_ptr;
    free(temp);
    return 1;
}


int search(struct node * end,struct node * beg,int data){
    if ((beg == NULL) && (end == beg)){
        return -2;
    }
    int i = 0;
    while(beg!=NULL){
        if (beg->data == data){
            return i;
        }
        i++;
        beg = beg->nxt_ptr;
    }
    return -1;
}


int sort(struct node **beg,struct node **end){

    int s = fn_size(*beg,*end);
    if (s==0){return 0;}
    int * arr = (int *)(malloc(sizeof(int)*s));

    struct node * temp = (*beg);
    for (int i = 0 ; i <s ; i++){
        arr[i]=temp->data;
        temp = temp->nxt_ptr;
    }
    temp = (*beg);
    
    //INSETION SORT 
    
    for (int i = 0 ; i < s - 1 ; i ++ ){
        for (int j = i+1 ; j > 0 ; j--){
            if (arr[j]<arr[j-1]){
                arr[j]=arr[j]+arr[j-1];
				arr[j-1]=arr[j]-arr[j-1];
				arr[j]=arr[j]-arr[j-1];
			}
            else{break;}
        }
    }
    
    for (int i = 0 ; i <s ; i++){
        temp->data=arr[i];
        temp = temp->nxt_ptr;
    }
    free(arr);
    return 1;

}


void show(struct node * beg,struct node * end){
    if ((end==NULL) && (end == beg)){
        printf("NO DATA");
        return;
    }
    
    if ((end == beg) && (end->nxt_ptr == NULL)){
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


int fn_size(struct node * beg,struct node * end){
    int i = 0;
    if ((end==NULL) && (end == beg)){
        return i;
    }
    while(beg!=NULL){
        i++;
        beg = beg->nxt_ptr;
    }
    return i;
}


int is_empty(struct node * beg,struct node * end){
    if (fn_size(beg,end) == 0){return 1;}
    return 0;
}


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



int main (){
   
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
            printf("Enter the number insert at beg : ");
            scanf("%d", &input_val);

            out = insert_at_beg(&beg,&end,input_val);
            if (out == 1)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
        case 2:
            printf("Enter the number insert at end : ");
            scanf("%d", &input_val);

            out = insert_at_end(&end,&beg,input_val);
            if (out == 1)
                printf("%d inserted \n", input_val);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else
                printf("cant insert\n");
            break;
            

        case 3:
            out = delete_at_beg(&beg,&end);
            if (out == 1)
                printf("Deleted value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Linked List Reset \n");
            break;
        case 4:
            out = delete_at_end(&end,&beg);
            if (out == 1)
                printf("Deleted value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Linked List Reset \n");
            break;

        case 5:
            printf("Enter the number insert : ");
            scanf("%d", &input_val);
            printf("Enter the position to insert  : ");
            scanf("%d", &pos);

            out = insert_at_pos(&end,&beg,input_val,pos);
            if (out == 1)
                printf("%d inserted at %d\n", input_val,pos);
            else if (out == -1)
                printf("%d inserted and new linked list created \n", input_val);
            else if (out == -2)
                printf("%d inserted at end \n", input_val);
            else
                printf("cant insert\n");
            break;

        case 6:
            show(beg,end);
            printf("\nEnter the position to delete : ");
            scanf("%d", &input_val);

            out = delete_at_pos(&end,&beg,input_val);
            if (out == 1)
                printf("%d Deleted \n", input_val);
            else if (out == -1)
                printf("%d deleted the last position \n", input_val);
            else if (out == -2)
                printf("deleted the beg eleement \n");
            else
                printf("Empty \n");
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
            printf("%d is the size of Linked List ", fn_size(beg,end));
            break;
            
            case 10:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(end,beg,input_val);
            if (out == -2)
            printf("No data  \n");
            else if (out == -1)
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
                if (is_empty(beg,end) != 1){show(beg,end);}
                    out = sort(&beg,&end);
                if (out == 1){
                    printf("Sorted\n");
                    show(beg,end);}
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