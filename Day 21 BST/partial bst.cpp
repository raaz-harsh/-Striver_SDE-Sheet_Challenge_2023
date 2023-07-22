#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
// bool isBST(BinaryTreeNode<int> *root, int min, int max){
//     if(root == NULL){
//         return true;
//     }

//     if(root->data <= max && root->data >= min){
//         bool left = isBST(root->left,min,root->data);
//         bool right = isBST(root->right,root->data,max);
//         return left & right;
//     }
//     else{
//         return false;
//     }
// }

void getInorder(BinaryTreeNode<int> *root, vector<int> &ans){
    if(root == NULL){
        return ;
    }

    getInorder(root->left,ans);
    ans.push_back(root->data);
    getInorder(root->right,ans);
}

bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    // return isBST(root,INT_MIN,INT_MAX);
    vector<int> ans;
    getInorder(root,ans);
    vector<int> sorted = ans;
    sort(sorted.begin(), sorted.end());
    bool flag = true;
    for(int i = 0; i<ans.size(); i++){
        if(sorted[i] == ans[i])
            flag = true;
        else{
            flag = false;
            break;
        }
    }

    return flag;

}