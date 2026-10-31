// Trees -> Q 01 : Construct a binary tree from preorder and inorder traversals.

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

int preindex = 0;

int search(int inorder[], int start, int end, int value) {
    for (int i = start; i <= end; i++) {
        if (inorder[i] == value) {
            return i;
        }
    }

    return -1;
}


struct Node* build_tree(int preorder[], int inorder[], int start, int end) {

    if (start > end) {
        return NULL;
    }

    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = preorder[preindex++];

    int pos = search(inorder, start, end, new_node->data);

    new_node->left = build_tree(preorder, inorder, start, pos - 1);
    new_node->right = build_tree(preorder, inorder, pos + 1, end);

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

    int n, preorder[100], inorder[100];

    printf("Enter number of nodes -> ");
    scanf("%d", &n);

    printf("Enter preorder -> ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &preorder[i]);
    }

    printf("Enter inorder -> ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &inorder[i]);
    }

    struct Node *root = build_tree(preorder, inorder, 0, n - 1);
    printf("Constructed tree -> ");
    display(root);

    return 0;
}
