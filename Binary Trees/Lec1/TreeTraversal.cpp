/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void inorder(TreeNode *root, vector<int> &out) {
    if (root->left != NULL) {
        inorder(root->left, out);
    }
    out.push_back(root->data);
    if (root->right != NULL) {
        inorder(root->right, out);
    }
}

void preorder(TreeNode *root, vector<int> &out) {
    out.push_back(root->data);
    if (root->left != NULL) {
        preorder(root->left, out);
    }
    if (root->right != NULL) {
        preorder(root->right, out);
    }
}

void postorder(TreeNode *root, vector<int> &out) {
    if (root->left != NULL) {
        postorder(root->left, out);
    }
    if (root->right != NULL) {
        postorder(root->right, out);
    }
    out.push_back(root->data);
}
    // Write your code here.

vector<vector<int>> getTreeTraversal(TreeNode *root){
    vector<vector<int>> ans;
    vector<int> ino,preo,posto;
    inorder(root,ino);
    preorder(root,preo);
    postorder(root,posto);
    ans.push_back(ino);
    ans.push_back(preo);
    ans.push_back(posto);
    return ans;
}
