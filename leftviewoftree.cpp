#include<bits/stdc++.h>
using namespace std;
#define ll long long

class TreeNode{
    public:
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    int value;
    TreeNode(int val)
    {
        value = val;
    }
};

void printleftview(TreeNode * root,int level,int& maxlevel)
{
    if(root == nullptr)return;
    if(maxlevel<level)
    {
        maxlevel = level;
        cout<<root->value<<endl;
    }
    printleftview(root->left,level+1,maxlevel);
    printleftview(root->right,level+1,maxlevel);
}
int main()
{
   TreeNode* root = new TreeNode(10);
   root->left = new TreeNode(20);
   root->right = new TreeNode(40);
   root->left->left = new TreeNode(60);
   root->left->right = new TreeNode(80);
   root->right->left = new TreeNode(120);
   root->right->right = new TreeNode(220);
   int maxlevel = 0;
   printleftview(root,1,maxlevel);
   return 0;
}