#include "BST.h"
#include "stdlib.h"

Node *insertNode(Node **proot, int x) {
    Node *root;
    if (*proot == NULL) {
        root = (Node *) malloc(sizeof(Node));
        root->key = x;
        root->right = NULL;
        root->left = NULL;
        *proot = root;
        return root;
    }
    root = *proot;
    if (root->key == x) return NULL;
    if (root->key > x) return insertNode(&root->left, x);
    else return insertNode(&root->right, x);
}


Node *deleteNode(Node **proot, int x) {
    Node *root;
    root = *proot;
    Node *temp;
    Node *father;

    if (!root) return NULL;
    else {
        temp = root;
        while (temp->key != x) {//find the node whose key echo to x and find its father
            father = temp;
            if (x > temp->key) temp = temp->right;
            else temp = temp->left;
        }
        if (temp->key != x) return NULL;
        else {
            if (!temp->left && !temp->right) {//no child
                if (father->right == temp) father->right = NULL;
                else father->left = NULL;
                return temp;
            }
            else if (temp->left && temp->right) {//two children
                Node *p;
                p = temp->right;
                while (p->left) {
                    father = p;
                    p = p->left;
                }
                temp->key = p->key;
                father->left = p->right;
                return p;
            }
            else {//one child
                Node *p;
                if (temp->left) p = temp->left;
                else p = temp->right;

                if (father->right == temp)
                    father->right = p;
                else if (father->left == temp)
                    father->left = p;
                else *proot = p;

                return temp;
            }
        }
    }
}

Node *findNode(Node *root, int x) {
    if (root == NULL) return NULL;
    if (root->key == x) return root;
    if (root->key > x) return findNode(root->left, x);
    else return findNode(root->right, x);
}

void destroyTree(Node *root) {
    if (root) {
        if (root->left) destroyTree(root->left);
        if (root->right) destroyTree(root->right);
        free(root);
    }
}
