void levelorder(Node *root, vector<vector<int>> &ans) { 
  if (root == nullptr) return;

  queue<Node*> q;
  q.push(root);

  while (!q.empty()) {
    int n = q.size();
    vector<int> level;

    for (int i = 0; i < n; i++) {
      Node *node = q.front();
      q.pop();
      level.push_back(node->data);

      if (node->left != nullptr) q.push(node->left);
      if (node->right != nullptr) q.push(node->right);
    }
    ans.push_back(level); 
  }
}
