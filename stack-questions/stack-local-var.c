#include <stdio.h>

#define STACK_SIZE 6

int push(int arr[], int *top, int num){
    if (*top >= STACK_SIZE - 1){return 0;}
    arr[++(*top)] = num;
    return 1;
}

int pop(int arr[], int *top, int *value){
    if (*top < 0){return 0;}
    *value = arr[*top];
    (*top)--;
    return 1;
}

int peek(int arr[], int *top, int *value){
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

void show_st(int arr[], int *top)
{
    if (*top == -1){
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements (top to bottom):\n");
      for (int i = *top; i >= 0; i--){
        printf("|-------|\n");
        printf("|       |\n");
        printf("|  %3d  |\n", arr[i]);
    }

    printf("|-------|\n");
}

int main()
{
    int arr[STACK_SIZE];
    int top = -1;
    int choice;
    int input_val;
    int out;
    int temp;

    while (1)
    {
        printf("\nEnter the choice for the operation to perform on stack:\n");
        printf("1 : push\n");
        printf("2 : pop\n");
        printf("3 : peek\n");
        printf("4 : size\n");
        printf("5 : isempty\n");
        printf("6 : show\n");
        printf("0 : exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to push : ");
            scanf("%d", &input_val);

            out = push(arr, &top, input_val);
            if (out == 1)
                printf("%d pushed to stack\n", input_val);
            else
                printf("Stack overflow\n");
            break;

        case 2:
            out = pop(arr, &top, &temp);
            if (out == 1)
                printf("Popped value : %d\n", temp);
            else
                printf("Stack underflow\n");
            break;

        case 3:
            out = peek(arr, &top, &temp);
            if (out == 1)
                printf("Top value : %d\n", temp);
            else
                printf("Stack is empty\n");
            break;

        case 4:
            printf("Size of stack : %d\n", size_st(&top));
            break;

        case 5:
            if (isempty(&top))
                printf("Stack is empty\n");
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