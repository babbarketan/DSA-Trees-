int heightOfBinaryTree(TreeNode<int> *root)
{
	if(root == nullptr) return 0;
    int left_heights = heightOfBinaryTree(root->left);
    int right_heghts = heightOfBinaryTree(root->right);
    return 1 + max(left_heights,right_heghts);
}
