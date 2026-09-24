
#include <stdio.h>
#include <stdlib.h>



// 1. INSERT 
// 2. SEARCH 
// 3. DELETE
// 4. MIN 
// 5. MAX 
// 6. PREORDER 
// 7. iNORDER 
// 8. POSTORDER 
// 9. IS EMPTY
// 10. no of LEVEL 


struct node{
    int data;
    struct node * left; 
    struct node * right; 
};


// 1. INSERT 

// - new node not created
// - is empty
// - if exist already 
// - add node 


int insert(struct node ** root,int data){

    struct node * new_node = (struct node *)(malloc(sizeof(struct node)));
    if (new_node == NULL){return 0;}
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    
    if ((*root) == NULL){
        (*root) = new_node;
        return 1;
    }

    struct node * temp = (*root);
    struct node * pre = (*root);
    while (temp!=NULL){
        if (data == temp->data){
            return -1;
        }
        else if (data < temp->data){
            pre = temp;
            temp = temp->left;
        }
        else if (data > temp->data){
            pre = temp;
            temp = temp->right;
        }
    }

    if (data < pre->data){
        pre->left = new_node;
        return 2;
    }
    else if (data > pre->data){
        pre->right = new_node;
        return 3;
    }

    return -2;

}



// 2. SEARCH 

// - is empty                   -1
// - find level if found         N
// - not found                  -2

int fn_search(struct node * root, int data){
    if (root == NULL){
        return -1;
    }

    int level = 0;
    while (root != NULL){
        if (data == root->data){
            return level;
        }
        else if (data < root->data){
            root = root->left;
            level++;
        }
        else if (data > root->data){
            root = root->right;
            level++;
        }
    }

    return -2;

}


// 3. DELETE

// - is empty
// - only root , reset
// - leaf delete
// - parent node delete habing one child
// - parent node delete habing two child
// - delted root (having childs) , reset
 
int fn_delete(struct node ** root){
    return 0;
}


// 4. MIN 

// - is empty : check befor calling the fn 
// - only root
// - go as far as in left

int fn_min(struct node * root){
    struct node * pre = root;

    while (root != NULL){
        pre = root;
        root = root->left;
    }

    return pre->data;
}



// 5. MAX 

// - is empty : check befor calling the fn 
// - only root
// - go as far as in left

int fn_max(struct node * root){
    struct node * pre = root;

    while (root != NULL){
        pre = root;
        root = root->right;
    }
    
    return pre->data;
}


// 6. PREORDER

// (root) --> (left) --> (Right)

void preorder(struct node * root) {
    if (root == NULL){
        return;
    }

    printf("| %d |", root->data);   // root
    preorder(root->left);        // left
    preorder(root->right);       // right
}



// 7. IN-ORDER

// (Left) --> (root) --> (Right)

void inorder(struct node * root) {
    if (root == NULL){
        return;
    }

    inorder(root->left);        // left
    printf("| %d |", root->data);   // root
    inorder(root->right);       // right
}



// 8. POST-ORDER

// (Left) --> (Right) --> (root)

void postorder(struct node * root) {
    if (root == NULL){
        return;
    }

    postorder(root->left);        // left
    postorder(root->right);       // right
    printf("| %d |", root->data);   // root
}


// 9 .IS EMPTY 

int is_empty(struct node * root){
    if (root == NULL){
        return 1;
    }
    return 0;
}



int main(){
    
    struct node * root = NULL;
    int choice,input_val,out;


    while (1){

        printf("\nEnter the choice :\n");
        printf("1 : insert \n");
        printf("2 : search \n");
        printf("3 : delete \n");
        printf("4 : min \n");
        printf("5 : max \n");
        printf("6 : preorder\n");
        printf("7 : inorder\n");
        printf("8 : postorder\n");
        printf("9 : is empty\n");
        printf("0 : exit\n");
        printf("Enter choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number to insert in tree : ");
            scanf("%d", &input_val);

            out = insert(&root,input_val);
            if (out == 1)
                printf("%d inserted as root\n", input_val);
            else if (out == -1)
                printf("cant insert same value again \n");
            else if (out == 2)
                printf("%d inserted as left\n", input_val);
            else if (out == 3)
                printf("%d inserted as right\n", input_val);
            else
                printf("cant insert\n");
            break;

        case 2:
            printf("Enter the number to SEARCH in tree : ");
            scanf("%d", &input_val);
            out = fn_search(root,input_val);
            
            if (out == -1)
                printf("No Data \n");
            else if(out == -2) 
                printf("Not found \n");
            else 
                printf("found at level : %d \n",out);
            break;


        case 3:
            out = fn_delete(&root);
            if (out == 0)
                printf("NOT IMPLEMETED");
            else
                printf(" \n");
            break;


        case 4:
            if (is_empty(root) == 1){printf("no data");break;}
            else{
                out = fn_min(root);
                printf("Min value : %d \n",out);}
    
            break;

        case 5:
             if (is_empty(root) == 1){printf("no data");break;}
            else{
                out = fn_max(root);
                printf("Max value : %d \n",out);}
                
            break;
            
            case 6:
            if (is_empty(root) == 1){printf("no data");break;}
                preorder(root);
            break;

            case 7:
            if (is_empty(root) == 1){printf("no data");break;}
                inorder(root);
            break;


            case 8:
            if (is_empty(root) == 1){printf("no data");break;}
                postorder(root);
            break;
            
            case 9:
                out = is_empty(root);
                if (out==1){
                    printf("empty\n");
                }
                else
                printf("not Empty \n");
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