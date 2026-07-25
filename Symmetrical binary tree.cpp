class Solution {
public:
    bool isSymmetricNodes(TreeNode* left,TreeNode* right){
        if(left==nullptr || right==nullptr){
            return left==right;
        }
        if(left->val != right->val){
            return false;
        }
        return isSymmetricNodes(left->left,right->right) && isSymmetricNodes(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
        return root==nullptr || isSymmetricNodes(root->left,root->right);
    }
};
