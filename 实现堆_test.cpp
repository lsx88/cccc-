#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t,n;
	int flag;
	int a;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		priority_queue<int> queue;
		for(int j=0;j<n;j++){
			cin>>flag;
			switch(flag){
				case 1:	cin>>a;
						a=-a;
						queue.push(a);	
						break;
				case 2:	a=queue.top();
						queue.pop();
						cout<<-a<<endl;
						break;
				default:cerr<<"error"<<endl;
						break;
			}
		}
	}
	return 0;
}
