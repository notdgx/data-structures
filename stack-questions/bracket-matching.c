#include <stdio.h>
#define STACK_SIZE 21

// STACK 


int push(char arr[], int *top, char val){
    if (*top >= STACK_SIZE - 1){return 0;}
    arr[++(*top)] = val;
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

int isempty(int *top){
    return (*top == -1);
}


// CHECKING

// int check(char arr[]){
//     int i = 0;
//     while(arr[i] != '\0'){
//         if (arr[i] != '{' || arr[i] != '}' || arr[i] != '[' || arr[i] != ']' || arr[i] != '(' || arr[i] != ')' || arr[i] != ' '){
//             return 0;
//         }
//         i++;
//     }
//     return 1;
// }


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

int bracket_match(char arr[],char stack[],int *top){

    int i = 0;
    char topush,poped,peeped;

    while(arr[i] != '\0'){

        if (arr[i] == '{' || arr[i] == '[' || arr[i] == '('){
            push(stack,top,arr[i]);}
        
        else if (arr[i]==' '){}

        else if (arr[i] == '}' || arr[i] == ']' || arr[i] == ')'){
            int state = peek(stack,top,&peeped);
            if (state && match_pair(peeped,arr[i])){
                pop(stack,top,&poped);   
            }
            else{return 0;}
        }
        else{return 0;}
        i++;
    }

        if (isempty(top))
            return 1;
        else
            return 0;


};


int main(){
    int top = -1 ;
    char stack[STACK_SIZE];
    char arr[STACK_SIZE]="{{{{{}}[}(]}}}";
    int a = bracket_match(arr,stack,&top);
    printf("%d",a);
    return 1;
}