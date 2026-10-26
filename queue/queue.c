#define QUEUE_SIZE 10


int enqueue(int queue[],int * front, int * rear ,int data){
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

int fn_front(int queue[],int front){
    return queue[front];
}

int fn_rear(int queue[],int rear){
    return queue[rear];
}

int is_empty(int queue[],int front, int rear){
    if ((front == -1 && rear == -1) || (front > rear)){
        return 1;
    }

    return 0;
}

int size(int queue[],int front, int rear){

    if ((front == -1 && rear == -1) || (front > rear)){
        return 0;
    }
    
    return rear-front+1;
}


void show(int queue[],int front, int rear){
    
    if ((front == -1 && rear == -1) || (front > rear)){
        printf("no data");
        return;
    }

    if (front == rear){
        printf("||f> %3d <r|", queue[front]);
        return;
    }

    printf("||f> %3d <|", queue[front]);

    for (int i = front+1 ; i < rear ; i++){
        printf("|  %3d  |", queue[i]);
    }
    printf("|r> %3d <||\n", queue[rear]);

}

int search(int queue[],int front, int rear,int data){
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

