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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*> qu;
        qu.push(root);
        bool leftTOright=true;
        while(!qu.empty()){
            int size=qu.size();
            vector<int> level(size);
            for(int i=0;i<size;i++){
                TreeNode* node=qu.front();
                qu.pop();
                int index=leftTOright?i:size-1-i;
                level[index]=node->val;
                if(node->left!=nullptr){
                    qu.push(node->left);
                }
                if(node->right!=nullptr){
                    qu.push(node->right);
                }
            }
            ans.push_back(level);
            leftTOright=!leftTOright;
        }
        return ans;
    }
};
