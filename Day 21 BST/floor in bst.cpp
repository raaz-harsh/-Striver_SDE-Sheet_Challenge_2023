#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long solve(TreeNode<int> *root,long long &ans,int x){

    if(root==NULL)return ans;

    if(root->val<=x){

        ans=root->val;

        solve(root->right,ans,x);

    }

    else solve(root->left,ans,x);

}

int floorInBST(TreeNode<int> * root, int x)

{

long long ans=-1;

if(root==NULL)return ans;

TreeNode<int> *node=root;

   return solve(node,ans,x);

 

}