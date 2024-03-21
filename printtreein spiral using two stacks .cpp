#include<bits/stdc++.h>
using namespace std;
#define ll long long

class TreeNode{
  public:
   TreeNode* right = nullptr;
   TreeNode* left = nullptr;
   int val = 0;
   TreeNode(int val)
   {
    this->val = val;
   }
};


void spiraltraverse(TreeNode* root)
{
  if(root == nullptr)return ;
  stack<TreeNode*>st1,st2;
  st1.push(root);

  while(!st1.empty() || !st2.empty())
  {
    
    if(st2.empty())
    {
      while(!st1.empty()){
      cout<<st1.top()->val<<" ";
      if(st1.top()->left)st2.push(st1.top()->left);
      if(st1.top()->right)st2.push(st1.top()->right);
      st1.pop();}
    }
    else{
      while(!st2.empty()){
      cout<<st2.top()->val<<" ";
      if(st2.top()->right)st1.push(st2.top()->right);
      if(st2.top()->left)st1.push(st2.top()->left);
      st2.pop();}
    }
    
  }

}
int main()
{
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);
    spiraltraverse(root);

}