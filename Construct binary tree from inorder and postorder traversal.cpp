class Solution {
public:
    unordered_map<int, int> mp;

    TreeNode* build(vector<int>& inorder,
                    int inst,
                    int inend,
                    vector<int>& postorder,
                    int postst,
                    int postend) {

        if (inst > inend || postst > postend) {
            return nullptr;
        }
        TreeNode* root = new TreeNode(postorder[postend]);
        int inRoot = mp[root->val];
        int numsLeft = inRoot - inst;

        root->left = build(inorder,inst,inRoot - 1,postorder,postst,postst + numsLeft - 1);

        root->right = build(inorder,inRoot + 1,inend,postorder,postst + numsLeft,postend - 1);

        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for (int i = 0; i < inorder.size(); i++) {
            mp[inorder[i]] = i;
        }

        return build(inorder,0,inorder.size() - 1,postorder,0,postorder.size() - 1);
    }
};
