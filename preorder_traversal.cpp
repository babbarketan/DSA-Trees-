void preorder(Node *root, vector<int> &pre) {
  if (root == nullptr)
    return;
  pre.push_back(root->data);
  preorder(root->left, pre);
  preorder(root->right, pre);
}
