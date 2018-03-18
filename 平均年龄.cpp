#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a;
	double count;
	double ave;
	for(int i=0;i<n;i++){
		cin>>a;
		count+=a;
	}
	ave=count/n;
	printf("%0.2f",ave);
	return 0;
		
} 
