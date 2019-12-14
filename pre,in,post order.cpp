#include<bits/stdc++.h>
#define format(q) setpersesion(q)
using namespace std;
struct node{
  int item;
  node *left,*right;
};
// depth first traversal
void preorder(node *pl)///root left right
{
  if(pl!=NULL)
  {
    cout<<pl->item<<"->";
    preorder(pl->left);
    preorder(pl->right);
  }
}
void inorder(node *pl)///left root right
{
  if(pl!=NULL)
  {
    inorder(pl->left);
    cout<<pl->item<<"->";
    inorder(pl->right);
  }
}
void postorder(node *pl) /// left right root
{
  if(pl!=NULL)
  {
    postorder(pl->left);
    postorder(pl->right);
    cout<<pl->item<<"->";
  }
}
void preorder_right(node *pr)///root right left
{
  if(pr!=NULL)
  {
    cout<<pr->item<<"->";
    preorder_right(pr->right);
    preorder_right(pr->left);
  }
}
void inorder_right(node *pr)///right root left
{
  if(pr!=NULL)
  {
    inorder_right(pr->right);
    cout<<pr->item<<"->";
    inorder_right(pr->left);
  }
}
void postorder_right(node *pr) /// right left root
{
  if(pr!=NULL)
  {
    postorder_right(pr->right);
    postorder_right(pr->left);
    cout<<pr->item<<"->";
  }
}
//breadth first traversal
void levelorder(node *p)
{
    if(p==NULL)
    {
      return;
    }
    queue<node*>q;
    q.push(p);
    while (!q.empty())
    {
      node *f=q.front();
      cout<<f->item<<"->";
      if(f->left!=NULL)
      {
        q.push(f->left);
      }
      if(f->right!=NULL)
      {
        q.push(f->right);
      }
      q.pop();
    }
}
int main()
{
    ///fast();
    return 0;
}
