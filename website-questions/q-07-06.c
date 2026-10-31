// Trees -> Q 06 : Find the maximum depth of a binary tree.

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
// 10. LEVEL ORDER
// 11. MAX DEPTH 
 


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
        // - inorder successor : right samllest
        // - inorder predecessor : largest samllest
// - delted root (having childs) , no reset but relpacemets by the childs
 
int fn_delete(struct node ** root,int data){
    // empty
    if ((*root) == NULL){
        return 0;
    }

    // only root , reset
    if (((*root)->left == NULL) && ((*root)->right == NULL) && ((*root)->data == data)){
        free((*root));
        (*root) = NULL;
        return -1;
    }

    //traverse 
    struct node * temp = (*root);
    struct node * pre = (*root);
    int flag = 0;
    while (temp!=NULL){

        if (temp->data < data){
            pre = temp;
            temp=temp->right;
        }
        else if (temp->data > data){
            pre = temp;
            temp=temp->left;
        }
        
     else {
        flag = 1;
        break;
    }
        
    }
    
    if (flag == 0){return -2;} // not found
    
    // leaf 
    if ((temp->left==NULL) && (temp->right==NULL)){
        if (temp->data < pre->data){
            pre->left = NULL;
        }
        else{
            pre->right = NULL;
        }
        free(temp);
        return -3; 
    }


    // node with either NULL 
    // right has value
    if ((temp->left==NULL) && (temp->right!=NULL)){ //right has value
        temp->data = temp->right->data;
        struct node * ryt = temp->right;
        temp->right = NULL;
        free(ryt);
        return -4 ; 
    }
    // left has value
    if ((temp->left!=NULL) && (temp->right==NULL)){ //left has value
        temp->data = temp->left->data;
        struct node * lft = temp->left;
        temp->left = NULL;
        free(lft);
        return -5 ; 
    }

    // node with none of them null 
    if ((temp->left!=NULL) && (temp->right!=NULL)){
        //finfing the inorder successor 
        pre = temp;
        struct node * successor = temp->right; 
        while (successor->left!=NULL){
            pre=successor;
            successor = successor->left;
        }

        temp->data = successor->data;

        if (pre->left == successor) {
            pre->left = successor->right;   
        }
        else {
            pre->right = successor->right;
        }

        free(successor);
        return -6;
    }
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


// 10. LEVEL ORDER 


int levelorder(struct node * root){
    if (root == NULL){ return 0;}

    struct node *queue[100];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {

        struct node *temp = queue[front++];
        printf("| %d |", temp->data);
        if (temp->left != NULL) {
            queue[rear++] = temp->left;
        }
        if (temp->right != NULL) {
            queue[rear++] = temp->right;
        }
    }

    return 1;

}

// 11. MAX DEPTH  


int max_depth(struct node * root){
    if (root == NULL){ return -1;}

    struct node *queue[100];
    int front = 0, rear = 0;

    int level = 0;

    queue[rear++] = root;

    while (front < rear) {

        struct node *temp = queue[front++];
        level++;
        if (temp->left != NULL) {
            queue[rear++] = temp->left;
        }
        if (temp->right != NULL) {
            queue[rear++] = temp->right;
        }
    }

    return level;

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
        printf("10 : level order\n");
        printf("11 : max depth\n");
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
            printf("Enter the number to DELETE in tree : ");
            scanf("%d", &input_val);
            
            out = fn_delete(&root,input_val);
            if (out == 0)
                printf("NOT DATA");
            else if(out == -1) 
                printf("Tree Reset \n");
            else if(out == -2) 
                printf("Not found \n");
            else if(out == -3) 
                printf("Leaf node deleted \n");
            else if(out == -4) 
                printf("Deleted ryt value\n");
            else if(out == -5) 
                printf("Deleted lft value\n");
            else if(out == -6) 
                printf("Node deleted \n");
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
            
            case 10:
            if (is_empty(root) == 1){printf("no data");break;}
                levelorder(root);
            break;

            case 11:
            if (is_empty(root) == 1){printf("no data");break;}
            out = max_depth(root);
            if (out==-1){
                printf("empty\n");
            }
            else{
                printf("The Max depth is -> %d\n",out);
            }
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