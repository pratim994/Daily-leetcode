#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != nullptr && root->val != val) {
            if (root->val < val)
                root = root->right;
            else
                root = root->left;
        }
        return root;
    }
};

// Utility function to insert a value into a BST
TreeNode* insertBST(TreeNode* root, int val) {
    if (!root) return new TreeNode(val);
    if (val < root->val)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

// Helper to print the BST in-order (for verification)
void inorderTraversal(TreeNode* root) {
    if (!root) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    Solution sol;
    TreeNode* root = nullptr;
    int n;

    cout << "Enter number of nodes in BST: ";
    cin >> n;

    cout << "Enter " << n << " values: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        root = insertBST(root, val);
    }

    cout << "Inorder traversal of BST: ";
    inorderTraversal(root);
    cout << endl;

    int target;
    cout << "Enter value to search in BST: ";
    cin >> target;

    TreeNode* result = sol.searchBST(root, target);

    if (result) {
        cout << "Found node with value: " << result->val << endl;
    } else {
        cout << "Value not found in BST" << endl;
    }

    return 0;
}
