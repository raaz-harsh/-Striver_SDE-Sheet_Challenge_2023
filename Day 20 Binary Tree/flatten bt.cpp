TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    TreeNode<int>* curr = root;
    while (curr != NULL) {
        if (curr->left) {
            TreeNode<int>* pred = curr->left;
            while (pred->right)
                pred = pred->right;
            pred->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
    return root;
}