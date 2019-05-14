#include "AVL.h"
#include "stdlib.h"
#include "stdio.h"

void UpdateHeight(Node **proot) {
    if (*proot != NULL) {
        if (!(*proot)->left && !(*proot)->right) {
            (*proot)->height = 0;
        } else if (!(*proot)->left) {
            (*proot)->height = (*proot)->right->height + 1;
        } else if (!(*proot)->right) {
            (*proot)->height = (*proot)->left->height + 1;
        } else {
            if ((*proot)->left->height > (*proot)->right->height) {
                (*proot)->height = (*proot)->left->height + 1;
            } else {
                (*proot)->height = (*proot)->right->height + 1;
            }
        }
    }
}

int Balanced(Node *root) {
    if (root->height == 2 && !root->right) {
        if (!root->left->left) {
            return 3;
        }
        return 1;
    }
    if (root->height == 2 && !root->left) {
        if (root->right->right == NULL) {
            return 4;
        }
        return 2;
    }
    if (!root->left && root->height - root->left->height == 3) {
        if (root->right->right->height > root->right->left->height) {
            return 2;
        }
        return 4;
    }
    if (root->right && root->height - root->right->height == 3) {
        if (root->left->left->height > root->left->right->height) {
            return 1;
        }
        return 3;
    }
    return -1;
}

void leftRotate(Node *root) {
    Node *newRoot = root->right;
    Node *oldRoot;
    oldRoot = (Node *) malloc(sizeof(Node));
    oldRoot->left = NULL;
    oldRoot->right = NULL;
    oldRoot->key = root->key;
    oldRoot->height = 0;
    oldRoot->left = root->left;
    UpdateHeight(&oldRoot);
    oldRoot->right = newRoot->left;
    root->left = oldRoot;
    root->right = newRoot->right;
    root->key = newRoot->key;
    UpdateHeight(&root);
    free(newRoot);
}

void rightRotate(Node *root) {
    Node *newRoot = root->left;
    Node *oldRoot;
    oldRoot = (Node *) malloc(sizeof(Node));
    oldRoot->left = NULL;
    oldRoot->right = NULL;
    oldRoot->key = root->key;
    oldRoot->height = 0;
    oldRoot->right = root->right;
    UpdateHeight(&oldRoot);
    oldRoot->left = newRoot->right;
    root->right = oldRoot;
    root->left = newRoot->left;
    root->key = newRoot->key;
    UpdateHeight(&root);
    free(newRoot);
}

void Rebalance(Node **proot) {
    switch (Balanced(*proot)) {
        case 1:
            rightRotate(*proot);
            break;
        case 2:
            leftRotate(*proot);
            break;
        case 3:
            leftRotate((*proot)->left);
            rightRotate(*proot);
            break;
        case 4:
            rightRotate((*proot)->right);
            leftRotate(*proot);
            break;
    }
}

Node *insertNode(Node **proot, int x) {
    Node *newNode;
    if (!(*proot)) {
        *proot = (Node *) malloc(sizeof(Node));
        (*proot)->left = NULL;
        (*proot)->right = NULL;
        (*proot)->key = x;
        (*proot)->height = 0;
        return *proot;
    }
    if ((*proot)->key == x) {
        return NULL;
    }
    if ((*proot)->key > x) {
        newNode = insertNode(&(*proot)->left, x);
    } else {
        newNode = insertNode(&(*proot)->right, x);
    }
    UpdateHeight(proot);
    Rebalance(proot);
    return newNode;
}

Node *deleteMin(Node **proot) {
    Node *minNode;
    if (!(*proot)->left) {
        minNode = (*proot);
        *proot = (*proot)->right;
        return minNode;
    }
    minNode = deleteMin(&(*proot)->left);
    UpdateHeight(proot);
    Rebalance(proot);
    return minNode;
}

Node *deleteRoot(Node **proot) {
    Node *currNode = *proot;
    if (!(*proot)->right && !(*proot)->left) {
        free(*proot);
        return NULL;
    }
    if (!(*proot)->left) {
        *proot = (*proot)->right;
        return currNode;
    }
    if (!(*proot)->right) {
        *proot = (*proot)->left;
        return currNode;
    }
    Node *minNode = deleteMin(&(*proot)->right);
    minNode->left = (*proot)->left;
    minNode->right = (*proot)->right;
    *proot = minNode;
    return currNode;
}

Node *deleteNode(Node **proot, int x) {
    Node *matchNode;

    if ((*proot)->key > x) {
        if ((*proot)->left->key == x && !((*proot)->left->left) && !((*proot)->left->right)) {
            matchNode = (*proot)->left;
            (*proot)->left = NULL;
            UpdateHeight(proot);
            Rebalance(proot);
            return matchNode;
        }
        matchNode = deleteNode(&(*proot)->left, x);
    } else if ((*proot)->key < x) {
        if ((*proot)->right->key == x && !((*proot)->right->left) && !((*proot)->right->right)) {
            matchNode = (*proot)->right;
            (*proot)->right = NULL;
            UpdateHeight(proot);
            Rebalance(proot);
            return matchNode;
        }
        matchNode = deleteNode(&(*proot)->right, x);
    } else {
        matchNode = deleteRoot(&(*proot));
    }
    UpdateHeight(proot);
    Rebalance(proot);
    return matchNode;
}

Node *findNode(Node *root, int x) {
    if (!root) {
        return NULL;
    }
    if (root->key == x) {
        return root;
    }
    if (root->key > x) {
        return findNode(root->left, x);
    } else {
        return findNode(root->right, x);
    }
}

void destroyTree(Node *root) {
    if (!root) {
        return;
    }
    if (root->left) {
        destroyTree(root->left);
    }
    if (root->right) {
        destroyTree(root->right);
    }
    free(root); 
}