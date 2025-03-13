class Solution {
public:
    int diameter = 0;  

    int heightOfBinaryTree(TreeNode* root) {
        if (root == nullptr)
            return 0;
        int left_heights = heightOfBinaryTree(root->left);
        int right_heights = heightOfBinaryTree(root->right);

       
        diameter = max(diameter, left_heights + right_heights);

        return 1 + max(left_heights, right_heights);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        heightOfBinaryTree(root);  
        return diameter;
    }
};
