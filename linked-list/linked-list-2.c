#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node * pre_ptr;
};

int add_node(struct node ** top, int data){

    struct node * new_node = (struct node *)malloc(sizeof(struct node));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    
    if (*top == NULL){
        new_node->pre_ptr = NULL;
        *top = new_node;
        return 1;
    }

    new_node->pre_ptr = *top;
    *top = new_node;
    return 1;
}


int pop_node(struct node **top)
{
    if (*top == NULL)
        return 0;

    struct node *temp = (*top)->pre_ptr;
    free(*top);
    *top = temp;
    return 1;
}

int is_empty(struct node *top){
    if (top == NULL){
        return 1;
    }
    else  return 0;
}



int peek_node(struct node *top){
        return top->data;
}




void show_node(struct node * top){
    if (top == NULL){
        printf("NO DATA\n");
        return;
    }

    printf("\n|> %3d <|", top->data);
    top=top->pre_ptr;

    while (top != NULL){

        printf("|  %3d  |", top->data);
        top=top->pre_ptr;
    }
    
}

int stack_size(struct node * top){
    int i=0;
    while (top != NULL){
        i++;
        top=top->pre_ptr;
    }
    return i;
}


int main(){

    struct node * top = NULL;
    int choice,input_val,out;

    while (1)
    {
        printf("\nEnter the choice :\n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("4 : size\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("Enter the number to push : ");
            scanf("%d", &input_val);

            out = add_node(&top,input_val);
            if (out == 1)
                printf("%d pushed to stack\n", input_val);
            else
                printf("Stack overflow \n");
            break;

        case 2:
            out = pop_node(&top);
            if (out == 1)
                printf("Popped");
            else
                printf("Stack underflow \n");
            break;

        case 3:
            out = is_empty(top);
            if (out == 0)
                printf("Top value : %d\n", peek_node(top));
            else
                printf("Stack is empty \n");
            break;

        case 4:
            printf("Size of stack : %d\n", stack_size(top));
            break;

        case 5:
            if (is_empty(top))
                printf("Stack is empty \n");
            else
                printf("Stack is not empty\n");
            break;

        case 6:
            show_node(top);
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