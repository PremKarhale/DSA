#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *left; /*root jo ak pointer hai uska left point karega ak newnode ko
                          jo ak value store karega , aur uska right point karega ak
                          aur new node ko jo ak nai value store karega .*/
    struct node *right;

    node(int val)
    {
        data = val;
        left = nullptr;
        right = nullptr;
    }

    static void preorder(struct node *root)
    {
        if (root == NULL)
        {
            return;
        }

        cout << root->data << " " << endl;
        preorder(root->left);
        preorder(root->right);
    }
};
void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " " << endl;
    inorder(root->right);
    /* data */
};
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " " << endl;
};
 int countnodes(struct node*root)
 {
    if(root==NULL){
        return 0;
    }

    return countnodes(root->right)+countnodes(root->left)+1;
    

 };

 int sumnodes(struct node*root)
 {
    if(root==NULL){
        return 0;
    }
    return sumnodes(root->left)+sumnodes(root->right)+root->data;

 }

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->right = new node(5);
    root->right->left = new node(7);
    cout << "preorder traversal" << endl;
    node::preorder(root);
    cout << "inorder traversal" << endl;
    inorder(root);
    cout << "postorder traversal" << endl;
    postorder(root);
    int y=countnodes(root);
    cout<<"no of nodes in a tree are :"<<y<<endl;

    int x=sumnodes(root);
    cout<<"sum of nodes are:"<<sumnodes(root)<<endl;
    
  

    cout << "Tree constructed successfully." << endl;
    cout << "Root node value: " << root->data << endl;
    cout << "Left child of root: " << root->left->data << endl;
    cout << "Right child of root: " << root->right->data << endl;
    cout << "right child of the right node :" << root->right->right->data << endl;

    return 0;
}