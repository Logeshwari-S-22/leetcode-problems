class BSTIterator {
public:
    stack<TreeNode*> st;
    void pushLeft(TreeNode* node){
        while(node!=nullptr){
            st.push(node);
            node=node->left;
        }
    }
    BSTIterator(TreeNode* root) {
        pushLeft(root);
    }
    
    int next() {
        TreeNode* node=st.top();
        st.pop();
        pushLeft(node->right);
        return node->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};
