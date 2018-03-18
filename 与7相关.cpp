#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool judge(int n){
	int a=n%10;
	int b=n/10;
	if(n%7==0||a==7||b==7) return 1;
	return 0;
	
}
int main(){
	int n;
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++){
		if(!judge(i)) count+=i*i;
	}
	cout<<count;
	return 0;
}
