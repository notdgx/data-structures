#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * nxt_ptr;
};


int enqueue(struct node ** front,struct node ** rear, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->nxt_ptr = NULL;

    if (((*front) == NULL) && ((*rear) == NULL)){
        *front = new_node;
        *rear = *front;
        return 1;
    }
    
    if ((*rear)->nxt_ptr == NULL){
        (*rear)->nxt_ptr = new_node;
        (*rear) = (*rear)->nxt_ptr;
        return 1;
    } 

    return 0;
}


int dequeue(struct node ** front,struct node ** rear){
    if ((*front) == NULL){
        return 0;
    }

    if (((*front)->nxt_ptr == NULL) && ((*front) == (*rear))){
        free(*front);
        (*front) = NULL;
        (*rear) = NULL;
        return -1;
    }
    
    struct node * temp = (*front)->nxt_ptr;
    free(*front);
    (*front)=temp;
    return 1;
}


int fn_front(struct node * front){
    return front->data;
}

int fn_rear(struct node * rear){
    return rear->data;
}


int is_empty(struct node * front,struct node * rear){
    if ((front == NULL) && (rear == front)){
        return 1;
    }
    return 0;
}


int fn_size(struct node * front){
    int i = 0;
    while(front != NULL){
        i++;
        front=front->nxt_ptr;
    }

    return i;
}



void show(struct node * front,struct node * rear){


    if ((front == NULL) && (rear == NULL)){
        printf("NO DATA\n");
        return;    
    }

    if (front == rear){
        printf("||f> %3d <r|", front->data);
        return;
    }


    printf("||f> %3d <|", front->data);
    front = front->nxt_ptr;
    while(front->nxt_ptr != NULL){
        printf("|> %3d <||\n", front->data);
        front=front->nxt_ptr;
    }
    printf("|r> %3d <||\n", rear->data);
    return;

}


int main(){
    
    struct node * front = NULL;
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
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to enqueue : ");
            scanf("%d", &input_val);

            out = enqueue(&front,&rear,input_val);
            if (out == 1)
                printf("%d enqueued \n", input_val);
            else
                printf("cant enqueue\n");
            break;

        case 2:
            out = dequeue(&front,&rear);
            if (out == 1)
                printf("Dequeued value\n");
            else if (out == 0)
                printf("No Data \n");
            else
                printf("Queue Reset \n");
            break;

        case 3:
            out = is_empty(front,rear);
            if (out == 0)
                printf("Front value : %d\n", fn_front(front));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(front,rear);
            if (out == 0)
                printf("rear value : %d\n", fn_rear(rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(front,rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(front,rear);
            break;
            
        case 7:
            printf("%d is the sixe of Queue ", fn_size(front));
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