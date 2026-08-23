#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};


int enqueue(struct node ** rear, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if ((*rear) == NULL){
        *rear = new_node;
        (*rear)->nxt_ptr = new_node;
        return 1;
    }
    
    // if ((*rear)->nxt_ptr == *rear){
        struct node * front = (*rear)->nxt_ptr;
        (*rear)->nxt_ptr = new_node;
        (*rear) = new_node;
        (*rear)->nxt_ptr = front;
        return 1;
    // } 
    
    // if ((*rear)->nxt_ptr != *rear){
    //     struct node * temp = (*rear)->nxt_ptr;
    //     (*rear)->nxt_ptr = new_node;
    //     (*rear) = (*rear)->nxt_ptr;
    //     (*rear)->nxt_ptr = temp;
    //     return 1;
    // } 

    // return 0;
}


int dequeue(struct node ** rear){
    if ((*rear) == NULL){
        return 0;
    }

    if (((*rear) == (*rear)->nxt_ptr)){
        free(*rear);
        (*rear) = NULL;
        return -1;
    }
    
    struct node * front = (*rear)->nxt_ptr;
    (*rear)->nxt_ptr = front->nxt_ptr;
    free(front);
    return 1;
}


int fn_front(struct node * rear){
    return ((rear)->nxt_ptr)->data;
}

int fn_rear(struct node * rear){
    return rear->data;
}


int is_empty(struct node * rear){
    if (rear == NULL){
        return 1;
    }
    return 0;
}


int fn_size(struct node * rear){
    if (rear == NULL){return 0;}

    struct node * front = rear->nxt_ptr;
    int i = 0;

    do{
    i++;
    front=front->nxt_ptr;
    }while(front != rear->nxt_ptr);

    return i;
}


void show(struct node ** rear){


    if (((*rear) == NULL)){
        printf("NO DATA\n");
        return;    
    }

    if ((*rear) == (*rear)->nxt_ptr){
        printf("||f> %3d <r||", (*rear)->data);
        return;
    }

    struct node * front = (*rear)->nxt_ptr;
    printf("||f> %3d <|", front->data);
    front = front->nxt_ptr;
    
    // while(front->nxt_ptr != rear->nxt_ptr){
    //     printf("|> %3d <||", front->data);
    //     front=front->nxt_ptr;
    // }
    
    while(front != (*rear)){
        printf("|> %3d <||", front->data);
        front=front->nxt_ptr;
    }

    printf("|r> %3d <||\n", (*rear)->data);
    return;
    
}



int search(struct node * rear,int data ){
    if ((rear == NULL)){
        return -1;    
    }
    
    struct node * front = rear->nxt_ptr;
    do{
        if (front->data == data){
            return 1;
        }
        front=front->nxt_ptr;
    }while(front != rear->nxt_ptr);
    return 0;
}


int clear_queue(struct node ** rear){
    if ((*rear) == NULL){
        return 0;
    }
    struct node * temp;
    struct node * front = (*rear)->nxt_ptr;

    while (front != (*rear)){
        temp = front;
        front = front->nxt_ptr;
        free(temp);
    }
    free(*rear);
    (*rear) = NULL;  
    return 1; 
}


int main(){
    
    struct node * rear = NULL;
    int choice,input_val,out;


    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : enqueue\n");
        printf("2 : dequeue\n");
        printf("3 : front\n");
        printf("4 : rear\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("7 : size\n");
        printf("8 : search\n");
        printf("9 : clear\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf("%d", &input_val);

            out = enqueue(&rear,input_val);
            if (out == 1)
                printf("%d enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(rear);
            if (out == 0)
                printf("Front value : %d\n", fn_front(rear));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(rear);
            if (out == 0)
                printf("rear value : %d\n", fn_rear(rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(&rear);
            break;
            
            case 7:
            printf("%d is the sixe of Queue ", fn_size(rear));
            break;
            
            case 8:
            printf("Enter the element to search : ");
            scanf("%d", &input_val);
            out = search(rear,input_val);
            if (out == 1)
            printf("Element Found \n");
            else if (out == 0)
            printf("Element Not Found\n");
            else
            printf("No data  \n");
            
            break;
            
            case 9:
                clear_queue(&rear);
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


// | Condition                            | Stop when...                    |             If starting at front |
// | ------------------------------------ | ------------------------------- | -------------------------------: |
// | `front != (*rear)->nxt_ptr`          | `front` reaches **front again** |wont work if 1st isnt skipped then it skips 0 iterations |
// | `front->nxt_ptr != (*rear)->nxt_ptr` | `front` reaches **rear**        |        doest need skipped 1st front    skips rear |
// | `front != *rear`                     | `front` reaches **rear**        | processes everything before rear |
