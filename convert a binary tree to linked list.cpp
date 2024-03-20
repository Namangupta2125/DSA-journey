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


TreeNode* converttolinkedlist(TreeNode* root,TreeNode* &prev)
{
   if(root == nullptr)return root;
   TreeNode* head = converttolinkedlist(root->left,prev);
   if(prev == nullptr)head = root;
   else{
    root->left = prev;
    prev->right = root;
   }
   prev = root;
   converttolinkedlist(root->right,prev);
   return head;

}
int main()
{
    TreeNode* root = new TreeNode(10);
     root->left = new TreeNode(20);
     root->left->left = new TreeNode(40);
     root->right = new TreeNode(60);
      root->right->right  = new TreeNode(60);

    TreeNode* prev = nullptr;
    TreeNode* head = converttolinkedlist(root,prev);
    while(head!=nullptr)
    {
        cout<<head->val<<" ";
        head = head->right;
    }
    return  0;
}