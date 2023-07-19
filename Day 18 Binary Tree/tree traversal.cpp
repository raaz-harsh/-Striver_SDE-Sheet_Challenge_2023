#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

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


************************************************************/
void inorder(BinaryTreeNode<int>* root,vector<int>&ans1){

    // base case

    if(root==NULL){

        return;

    }

 

    inorder(root->left,ans1);

    ans1.push_back(root->data);    

    inorder(root->right,ans1);

    return;

}

 

void preorder(BinaryTreeNode<int>* root, vector<int>&ans2){

 

    if(root==NULL){

        return;

    }

 

    ans2.push_back(root->data);

    preorder(root->left,ans2);

    preorder(root->right,ans2);

    return;    

    

}

 

void postorder(BinaryTreeNode<int>* root, vector<int>&ans3){

 

    if(root==NULL){

        return;

    }

 

    postorder(root->left,ans3);

    postorder(root->right,ans3);

    ans3.push_back(root->data);    

    return;

    

}

 

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){

    // Write your code here.

    

    vector<vector<int>>ans;

    vector<int>ans1,ans2,ans3;

 

    inorder(root,ans1);

    preorder(root,ans2);

    postorder(root,ans3);

    ans.push_back(ans1);    

    ans.push_back(ans2);    

    ans.push_back(ans3);    

 

    return ans;

}