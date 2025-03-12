// First of all we have to use find height function in this question and after that what we have to do is store value of left and right and check for there abs diff as <=1 and then continuosly check for left and right part and if true then reuturn true;
class Solution {
public:
    int htree(TreeNode* root){
        if(root == nullptr) return 0;
        int lh = htree(root->left);
        int rh = htree(root->right);
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int lh = htree(root->left);
        int rh = htree(root->right);
        if(abs(rh-lh)>1) return false;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        if(!left || !right) return false;
        return true;
    }
};
