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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if(root==nullptr){
            return ans;
        }
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            int size=qu.size();
            long long sum=0;
            for(int i=0;i<size;i++){
                TreeNode* node=qu.front();
                qu.pop();
                sum+=node->val;
                if(node->left != nullptr){
                    qu.push(node->left);
                }
                if(node->right != nullptr){
                    qu.push(node->right);
                }
            }
            double avg=(double)sum/size;
            ans.push_back(avg);
        }
        return ans;
    }
};
