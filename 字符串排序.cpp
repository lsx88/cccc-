#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool judge(string str1,string str2){
	return str1.length()>=str2.length();
}
int main(){
	int n;
	while(cin>>n){
	string a[100];
	string str[100];
	
	string temp;
	int i=0;
	while(getline(cin,a[i]),i<n&&a[i]!="stop"){
		i++;	
	}
	if(a[i]=="stop"){
		for(int j=0;j<i;j++)
			str[j]=a[j];
		i-=1;
	}
	else{
		for(int j=0;j<=i;j++)
			str[j]=a[j];
	}
	
    for(int j=1;j<=i;j++)
    	for(int k=1;k<=j;k++){
    		if(judge(str[k],str[j])){
    			temp=str[j];
    			str[j]=str[k];
    			str[k]=temp;
			}
		}
	for(int k=1;k<=i;k++){
		cout<<str[k]<<endl;
	}
	}
	return 0;
}
