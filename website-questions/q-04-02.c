// Stacks -> Q 02 : Create a stack using a character array and implement push, pop, peek, isEmpty, and isFull operations.

#include <stdio.h>

#define STACK_SIZE 6

int push(char arr[], int *top, char num){
    if (*top >= STACK_SIZE - 1){return 0;}
    arr[++(*top)] = num;
    return 1;
}

int pop(char arr[], int *top, char *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    (*top)--;
    return 1;
}

int peek(char arr[], int *top, char *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    return 1;
}

int size_st(int *top){
    return (*top) + 1;
}

int isempty(int *top){
    return (*top == -1);
}

void show_st(char arr[], int *top)
{
    if (*top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements :\n\n");
      for (int i = 0 ; i < *top ; i++){
        printf("|  %3c  |", arr[i]);
    }
    printf("|> %c <|\n", arr[*top]);

}

int main()
{
    char arr[STACK_SIZE];
    int top = -1;
    int choice;
    char input_val;
    int out;
    char temp;

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
            scanf(" %c", &input_val);

            out = push(arr, &top, input_val);
            if (out == 1)
                printf("%c pushed to stack\n", input_val);
            else
                printf("Stack overflow \n");
            break;

        case 2:
            out = pop(arr, &top, &temp);
            if (out == 1)
                printf("Popped value : %c\n", temp);
            else
                printf("Stack underflow \n");
            break;

        case 3:
            out = peek(arr, &top, &temp);
            if (out == 1)
                printf("Top value : %c\n", temp);
            else
                printf("Stack is empty \n");
            break;

        case 4:
            printf("Size of stack : %d\n", size_st(&top));
            break;

        case 5:
            if (isempty(&top))
                printf("Stack is empty \n");
            else
                printf("Stack is not empty\n");
            break;

        case 6:
            show_st(arr, &top);
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