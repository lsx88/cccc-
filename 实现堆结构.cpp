#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int heap[100000];
int mix[10000];
int d=0;
int cmp(const void * a,const void * b)  {  
    return (*(int*)b-*(int*)a);
}  
void minheap(){
	int n;
	cin>>n;
	
	int a,b;
	string str;
	int j=0;
	int k=0;
	int flag=1;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==1){
			cin>>b;
			heap[j]=b;
			j++;
		}
		else if(a==2){
			if(j==0){
			 cout<<"error"<<endl;
			 break;
			}
			k++;
			if(flag==1){
				qsort(heap,j,sizeof(int),&cmp);
				flag=0;
			}
			cout<<heap[j-k]<<endl;
		
		}
		else{
		 cout<<"error"<<endl;
		 break;
	}
	}
	
}

int main(){
	int t;
	
	cin>>t;
	int a,b;
	for(int i=0;i<t;i++){
		minheap();
	} 

	return 0;
}

