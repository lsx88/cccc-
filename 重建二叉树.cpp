/*
²Î¿¼Á´½Ó£ºhttp://blog.csdn.net/melanieecd/article/details/71037176
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int value;
	struct node *l;
	struct node *r;
}tree;
int second[65535];
int third[65535];
int a[65535];
int j=0;
tree *creattree(int s1,int s2,int t1,int t2){
	int lenth=s2-s1+1;
	tree *root=new tree;
	root->value=third[t2];
	root->l=NULL;
	root->r=NULL;
	int i=0;
	for(i=0; i<lenth;++i){
		if(root->value==second[s1+i])
			break;
	}
	if(i>=1) root->l=creattree(s1, s1+i-1, t1, t1+i-1);
    if(s1+i+1<=s2) root->r=creattree(s1+i+1, s2, t1+i, t2-1); 
    return root;  
}
void printtree(tree *root){
	if(root!=NULL){
		//cout<<root->value<<" ";	
		a[j]=root->value;
		j+=1;
		printtree(root->l);
		printtree(root->r);
		
	}
}
int main(){
	
	int i=0;
	while(cin>>second[i]){
		i++;
	 if(cin.get() != ' ') break;
	}
	i=0;
	while(cin>>third[i]){
		i++;
	if(cin.get() != ' ') break;
	}
	tree *root=creattree(0, i-1, 0, i-1);  
   printtree(root); 
   for(int k=0;k<i-1;k++)
    	cout<<a[k]<<" ";
	cout<<a[i-1];
   return 0;
}











