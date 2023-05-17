#include<iostream>
using namespace std;

struct Node{
 int data;
 Node *left, *right;
 Node(int val)
 {
     data=val;
     left=NULL;
     right=NULL;
 }
 };
Node* insertBst(Node *root, int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
  if(val< root->data)
  {
      root->left = insertBst(root->left, val);
  }
  else
  {
      //val>root->data
      root->right=insertBst(root->right, val);
  }
}
void preorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *root)
{
    if(root==NULL)
    {
       return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main()
{
    Node *root=NULL;
    root=insertBst(root,5);
    insertBst(root, 1);
    insertBst(root,3);
    insertBst(root,4);
    insertBst(root,2);
    insertBst(root,7);
 cout<<endl;
   cout<<"--Inorder--"<<endl;
    inorder (root);

    cout<<endl;

    cout<<"--Preorder--"<<endl;
    preorder (root);

    cout<<endl;
    cout<<"--Postorder--"<<endl;
    postorder(root);

    return 0;
}
