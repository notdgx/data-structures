#include <stdio.h>
#include <conio.h>
#include <string.h>

int pop(int arr[],int * top){
    if (*top >= 0){
        (*top)--;
        return 1;
    }
    else{return 0;}
}

int push(int arr[],int * top,int num){
    int size = sizeof(arr)/sizeof(arr[0]);
    if (*top < size){
        arr[++*top] = num;
        return 1;
    }
    else if (*top>=size){
        return 0;
    }
}

 jkn

int peek(int arr[],int * top){
    int size = sizeof(arr)/sizeof(arr[0]);
    if (*top > -1 && *top < size){
        return arr[*top];
    }
    else {
        return -1;
    }
}

int size_st(int arr[],int * top){
    return (*top) * sizeof(arr[0]);
}

int isempty(int arr[],int * top){
    if (*top == -1){return 1;}
    else {return 0;}
}

// void show_st(int arr[],int * top){
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i = size -1 ; i >= 0 ; i--){

//         printf(" _______ ")
//         printf("|       |")
//         printf("|       |")
//         printf("|       |")
//     }
// }

int main(){
    int arr[6];
    int top = -1;
    int choice;
    int input_val;
    int out;

    while(1){
        
        printf("Enter the Choice for the operation to perform on stack : \n");
        printf("1 : push \n");
        printf("2 : pop \n");
        printf("3 : peek \n");
        printf("4 : size \n");
        printf("5 : isempyt \n");
        printf("6 : show \n");
        printf("0 : exit \n");

        scanf("%d", &choice);
        
        switch (choice)
        {
            case 1:
            printf("Enter the number to push : ");    
            scanf(%d, &input_val);
            out = push(arr,&top,input_val);
            if (out == 1){
                printf("%d pushed to stack\n",input_val);
            }
            else if(out == 0){
                printf("Cant push %d to stack\n",input_val);z
                printf("Stack Overflow");    
                
            }
            break;

        case 2:
            printf("You selected 2");
            break;

        case 3:
            printf("You selected 3");
            break;

        default:
            printf("Invalid choice");
    }

    }

    return 0;
}