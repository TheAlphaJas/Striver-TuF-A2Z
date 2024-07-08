/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode *node) {
        if (node == NULL) {return 0;}
        return 1 + max(height(node->left), height(node->right));
    }
    bool isBalanced(TreeNode* root) {
       if (root == NULL) {return 1;} 
       if (!isBalanced(root->left)) {return 0;}
       if (!isBalanced(root->right)) {return 0;}
       if (abs(height(root->left)-height(root->right))>1) {return 0;}
       return 1;
    }
};
