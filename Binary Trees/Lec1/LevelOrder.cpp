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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root==NULL) {return {};}
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> temp1;
        while(!q.empty()) {
            int qs = q.size();
            TreeNode *temp;
            while(qs--) {
                temp = q.front();
                temp1.push_back(temp->val);
                q.pop();
                if (temp->left != NULL) {q.push(temp->left);}
                if (temp->right != NULL) {q.push(temp->right);}
            }
            ans.push_back(temp1);
            temp1.clear();
        }
        return ans;
    }
};
