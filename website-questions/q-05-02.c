// Queues -> Q 02 : Implement a simple queue using a string array with insert, delete, peek, isEmpty, and isFull operations.
#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 10


int enqueue(char queue[],int * front, int * rear ,char data){
    if (*front == -1 && *rear == -1){
        (*front)++;
        (*rear) ++;
        queue[*rear] = data;
        return 1;
    }

    if (*front > -1 && *rear < QUEUE_SIZE - 1){
        (*rear) ++;
        queue[*rear] = data;
        return 1;
    }

    return 0;

}

int dequeue(int * front, int * rear){
    if (*front == -1 && *rear == -1){
        return 0;
    }
    
    if ((*front <= *rear ) && (*front < QUEUE_SIZE)){
        
        if ((*front == QUEUE_SIZE -1)){
            *front = -1;
            *rear = -1;
            return -1;
        }

        if (*front == *rear) {
            *front = -1;
            *rear = -1;
             return 1;
            }
        
        (*front)++;
        return 1;
    }
    return 0;
}

int fn_front(char queue[],int front){
    return queue[front];
}

int fn_rear(char queue[],int rear){
    return queue[rear];
}

int is_empty(char queue[],int front, int rear){
    if ((front == -1 && rear == -1) || (front > rear)){
        return 1;
    }

    return 0;
}

int size(char queue[],int front, int rear){

    if ((front == -1 && rear == -1) || (front > rear)){
        return 0;
    }
    
    return rear-front+1;
}


void show(char queue[],int front, int rear){
    
    if ((front == -1 && rear == -1) || (front > rear)){
        printf("no data");
        return;
    }

    if (front == rear){
        printf("||f> %c <r|", queue[front]);
        return;
    }

    printf("||f> %c <|", queue[front]);

    for (int i = front+1 ; i < rear ; i++){
        printf("|  %c  |", queue[i]);
    }
    printf("|r> %c <||\n", queue[rear]);

}

int search(char queue[],int front, int rear,char data){
    if ((front == -1 && rear == -1) || (front > rear)){
        return -1;
    }

    for (int i = front ; i < rear + 1 ; i++){
        if (queue[i] == data){
            return 1;
        }
    }
    return 0;
}



int main(){

    char * queue = (char *)(malloc(sizeof(int) * QUEUE_SIZE));
    int front = -1;
    int rear = -1;
    int choice,out;
    char input_val;


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
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the char to enqueue : ");
            scanf(" %c", &input_val);

            out = enqueue(queue,&front,&rear,input_val);
            if (out == 1)
                printf("%c enqueued \n", input_val);
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
            out = is_empty(queue,front,rear);
            if (out == 0)
                printf("Front value : %c\n", fn_front(queue,front));
            else
                printf("Queue is empty \n");
            break;

        case 4:
            out = is_empty(queue,front,rear);
            if (out == 0)
                printf("rear value : %c\n", fn_rear(queue,rear));
            else
                printf("Queue is empty \n");
            break;


        case 5:
            if (is_empty(queue,front,rear))
                printf("Queue is empty \n");
            else
                printf("Queue is not empty\n");
            break;

        case 6:
            show(queue,front,rear);
            break;
            
        case 7:
            printf("%d is the sixe of Queue ", size(queue,front,rear));
                break;
        case 8:
            printf("Enter the element to search : ");
            scanf(" %c", &input_val);
            out = search(queue,front,rear,input_val);
            if (out == 1)
                printf("Element Found \n");
            else if (out == 0)
                printf("Element Not Found\n");
            else
                printf("No data  \n");

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