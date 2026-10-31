// Trees -> Q 05 : Construct a binary tree from postorder and inorder traversals.


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

int postindex = 0;

int search(int inorder[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value) {
            return i;
        }
    }

    return -1;
}


struct Node* build_tree(int postorder[], int inorder[], int start, int end) {

    if (start > end) {
        return NULL;
    }

    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = postorder[postindex--];

    int pos = search(inorder, start, end, new_node->data);

    new_node->right = build_tree(postorder, inorder, pos + 1, end);
    new_node->left = build_tree(postorder, inorder, start, pos - 1);

    return new_node;
}


void display(struct Node *root) {
    if (root == NULL) {
        return;
    }

    // inorder display 
    display(root->left);
    printf("%d ", root->data);
    display(root->right);
}

int main(){

    int n, postorder[100], inorder[100];

    printf("Enter number of nodes -> ");
    scanf("%d", &n);

    printf("Enter postorder -> ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &postorder[i]);
    }

    printf("Enter inorder -> ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &inorder[i]);
    }

    postindex = n-1;
    struct Node *root = build_tree(postorder, inorder, 0, n - 1);
    printf("Constructed tree -> ");
    display(root);

    return 0;
}
