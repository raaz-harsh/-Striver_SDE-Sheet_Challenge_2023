#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> l;
void f(TreeNode<int> *root,int level){
    if(root==NULL) return;
    if(level==l.size()) l.push_back(root->data);
    f(root->left,level+1);
    f(root->right,level+1);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    l.clear();
    f(root,0);
    return l;

}