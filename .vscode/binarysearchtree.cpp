#include <iostream>
using namespace std;
struct node{
    int data;
    node*right,*left;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;

    };
    node*insert(node*root,int val){
        if(root==NULL){
            return new node(val);
        }
        if(val<root->data){
         root->left=insert(root->left,val);

        }
        else{
            root->right=insert(root->right,val);
        }
        return root;

    }

    void inorder(struct node*root)
    {
        if(root==NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" "<<endl;
        inorder(root->right);
       
    };
    
    int main(){
        node*root=NULL;
        root=insert(root,4);
        insert(root,6);
        insert(root,7);
        insert(root,3);
        insert(root,8);
        insert(root,9);
        inorder(root);


    }

  

};