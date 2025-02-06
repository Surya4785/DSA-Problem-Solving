// to construct full binary tree using its preorder traversal and preorder traversal of its mirror tree

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

Node* constructBinaryTreeUtil(vector<int> &pre, vector<int> &preM, 
int &preIndex, int l, int h, int size) {
    // Base case
    if (preIndex >= size || l > h)
        return nullptr;

    // Create the root node using the current preIndex
    Node* root = new Node(pre[preIndex++]);

    // If the current subarray has only one element, no need to recurse
    if (l == h)
        return root;

    // Search the next element of pre[] in preM[]
    int i;
    for (i = l; i <= h; ++i)
        if (pre[preIndex] == preM[i])
            break;

    // Recursively construct left and right subtrees
    if (i <= h) {
        root->left = 
          constructBinaryTreeUtil(pre, preM, 
                                  preIndex, i, h, size);
        root->right = 
          constructBinaryTreeUtil(pre, preM, 
                                  preIndex, l + 1, i - 1, size);
    }

    return root;
}
Node* constructBinaryTree(vector<int> &pre, vector<int> &preMirror) {
    int preIndex = 0;
    int size = pre.size();

    Node *root = constructBinaryTreeUtil(pre, preMirror, 
                                         preIndex, 0, size - 1, size);
    return root;
}

void printInorder(Node* curr) {
    if (curr == nullptr)
        return;

    printInorder(curr->left);
    printf("%d ", curr->data);
    printInorder(curr->right);
}

int main() {
  
    vector<int> preOrder = {1, 2, 4, 5, 3, 6, 7};
    vector<int> preOrderMirror = {1, 3, 7, 6, 2, 5, 4};

    Node* root = 
      constructBinaryTree(preOrder, preOrderMirror); 
    printInorder(root); 

    return 0;
}
