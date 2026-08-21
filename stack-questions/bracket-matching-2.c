#include <stdio.h>
#include <stdlib.h>

struct node{
    char data;
    struct node * ptr;
};


// QUEUES : IT is normal dynamic sized non circular queue with 
//          linked list with functions `enqueue`, `dequeue`, `front`, `rear`, `isempty`, `size`, `show`, `search`

int enqueue(struct node ** front,struct node ** rear, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->ptr = NULL;

    if (((*front) == NULL) && ((*rear) == NULL)){
        *front = new_node;
        *rear = *front;
        return 1;
    }
    
    if ((*rear)->ptr == NULL){
        (*rear)->ptr = new_node;
        (*rear) = (*rear)->ptr;
        return 1;
    } 

    return 0;
}


int dequeue(struct node ** front,struct node ** rear){
    if ((*front) == NULL){
        return 0;
    }

    if (((*front)->ptr == NULL) && ((*front) == (*rear))){
        free(*front);
        (*front) = NULL;
        (*rear) = NULL;
        return -1;
    }
    
    struct node * temp = (*front)->ptr;
    free(*front);
    (*front)=temp;
    return 1;
}


char fn_front(struct node * front){
    return front->data;
}

char fn_rear(struct node * rear){
    return rear->data;
}


int is_empty_queue(struct node * front,struct node * rear){
    if ((front == NULL) && (rear == front)){
        return 1;
    }
    return 0;
}


int fn_size(struct node * front){
    int i = 0;
    while(front != NULL){
        i++;
        front=front->ptr;
    }

    return i;
}


char get_one_by_one(struct node * front , struct node * rear, struct node ** ptr){

    if ((front == NULL) && (rear == front) && (*ptr == NULL)){
        return '\0';
    }

    // if ((*ptr) == NULL){
    //     (*ptr) = front->ptr;
    //     return front->data; 
    // }

    while((front) != NULL){
        if (front == *ptr){
            *ptr = front->ptr;

            return front->data;
        }
        front=front->ptr;
    }
    return '\0';    
}


void clear_queue(struct node ** front, struct node ** rear){
    struct node * temp;
    while (*front != NULL){
        temp = *front;
        *front = (*front)->ptr;
        free(temp);
    }
    *rear = NULL;   
}


// STACK 



int add_node(struct node ** top, char data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    
    if (*top == NULL){
        new_node->ptr = NULL;
        *top = new_node;
        return 1;
    }

    new_node->ptr = *top;
    *top = new_node;
    return 1;
}


int pop_node(struct node **top)
{
    if (*top == NULL)
        return 0;

    struct node *temp = (*top)->ptr;
    free(*top);
    *top = temp;
    return 1;
}

int is_empty_stack(struct node *top){
    if (top == NULL){
        return 1;
    }
    else  return 0;
}



char peek_node(struct node *top){
        return top->data;
}


void clear_stack(struct node ** top){
    struct node * temp;
    while (*top != NULL){
        temp = *top;
        *top = (*top)->ptr;
        free(temp);
    }
}




// -----------------------------------


// BRACKJET MATCHING FUNCTIONS 


int match_pair(char a, char b){
    if (a=='{' && b =='}'){
        return 1;
    }
    else if (a=='[' && b==']'){
        return 1;
    }
    else if (a=='(' && b==')'){
        return 1;
    }
    return 0;

}

int bracket_match(struct node ** front , struct node ** rear,struct node ** top){

    char front_data_queue;

    while(!is_empty_queue(*front,*rear)){

        front_data_queue = fn_front(*front);

        if (front_data_queue == '{' || front_data_queue == '[' || front_data_queue == '('){
            add_node(top,front_data_queue);}
        
        else if (front_data_queue==' '){}

        else if (front_data_queue == '}' || front_data_queue == ']' || front_data_queue == ')'){
            int state = is_empty_stack(*top);
            if (!state && match_pair(peek_node(*top),front_data_queue)){
                pop_node(top);
            }
            else{return 0;}
        }
        else{return 0;}
        dequeue(front,rear);
    }

        if (is_empty_stack(*top))
            return 1;
        else
            return 0;


};


int main(){

    struct node * front = NULL;
    struct node * rear = NULL;
    
    struct node * get_ptr = NULL;

    struct node * top = NULL;
    char temp;

    while (1){
        printf("Enter the brackets : ");
        while ((temp = getchar()) != '\n'){
            enqueue(&front,&rear,temp);
        }
        printf("\n");
        printf("+-----------+");
        printf("\n");
        printf("Brackets you entered : ");

        get_ptr = front;
        while((temp = get_one_by_one(front,rear,&get_ptr)) != '\0'){
            printf("%c",temp);
        }

        if (bracket_match(&front,&rear,&top) == 1){
            printf("\nMatched\n");
        }
        else {
            printf("\nDoesnt Matched\n");
            
        }
        printf("\n");
        printf("+-----------+");
        printf("\n");

        clear_queue(&front,&rear);
        clear_stack(&top);

        printf("Do you want to continue ? (Y/N)");
        temp = getchar();
        while (getchar() != '\n');
        if ((temp == 'N') || (temp == 'n')){
            break;
        }
        // fflush(stdin);
    }

    return 0;


}

// > fixesdone
// - clear/reset the nodes
// - here we have precidence conflict (temp = getchar()) != '\n'
// - increasing the frontn 