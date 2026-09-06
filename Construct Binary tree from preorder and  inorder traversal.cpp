class Solution {
public:
    unordered_map<int,int> mp;
    TreeNode* build(vector<int>preorder,int prest,int preend,vector<int>inorder,int inst,int inend){
        if(prest>preend || inst>inend){
            return nullptr;
        }
        TreeNode* root=new TreeNode(preorder[prest]);
        int inRoot=mp[root->val];
        int numsLeft=inRoot-inst;
        root->left=build(preorder,prest+1,prest+numsLeft,inorder,inst,inRoot-1);
        root->right=build(preorder,prest+numsLeft+1,preend,inorder,inRoot+1,inend);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        } 
        TreeNode* root=build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1);
        return root;
    }
};
