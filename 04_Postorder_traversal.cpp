void postorder(Node *root, vector<int> &post) {
  if (root == nullptr)
    return;
  postorder(root->left, post);
  postorder(root->right, post);
  post.push_back(root->data); 
}
