class Solution {
public:
    int height(TreeNode* node,int& maxi){
        if(!node){
            return 0;
        }
        int leftheight=height(node->left,maxi);
        int rightheight=height(node->right,maxi);
        maxi=max(maxi,leftheight+rightheight);
        return 1+max(leftheight,rightheight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        height(root,diameter);
        return diameter;
    }
};
