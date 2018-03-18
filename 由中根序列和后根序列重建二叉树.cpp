#include<iostream>  
#include<bits/stdc++.h>
using namespace std;   
typedef struct _btn  
{  
    int data;  
    struct _btn *left;  
    struct _btn *right;   
} btn;  
  
#define MAXN 65536   
int inOrder[MAXN];  
int postOrder[MAXN];  
  
btn *buildtree(int io1, int io2, int po1, int po2)  
{  
    int iolen=io2-io1+1;        
    btn *root = new btn;   
    root->data=postOrder[po2];    
    root->left=NULL;  
    root->right=NULL; 
    int i=0;
    for( i=0; i<iolen; ++i)  
    {  
        if(root->data == inOrder[io1+i])  
            break;  
    }  
      
    if(i>=1) root->left=buildtree(io1, io1+i-1, po1, po1+i-1);
    if(io1+i+1<=io2) root->right=buildtree(io1+i+1, io2, po1+i, po2-1); 
    return root;  
} 
void preOrder(btn *root)  
{  
    if(root != NULL)  
    {  
        cout<<root->data<<" ";  
        preOrder(root->left);  
        preOrder(root->right);  
    }  
}  
void deletetree(btn *root)  
{  
    if(root != NULL)  
    {  
        deletetree(root->left);  
        deletetree(root->right);  
        delete root;  
        root=NULL;  
    }  
}  
  
int main()  
{  
    int i=0;  
    while(cin>>inOrder[i++])  
    {  
        if(cin.get() != ' ') break;
    }  
  
    i=0;  
    while(cin>>postOrder[i++])  
    {  
        if(cin.get() != ' ') break;  
    }  
    btn *root=buildtree(0, i-1, 0, i-1);  
    preOrder(root);  
    deletetree(root);  
    return 0;  
}  




