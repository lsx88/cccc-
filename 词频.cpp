#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct word{
	string a;
	int count;
}w[100]; 
string s[100];
int main(){
	string str;
	int c=0;
	while(1){
		string a[100];
		int i=0;
	
		while(cin>>str){
		s[i]=str;
		i+=1;
		
		if(getchar()=='\n') break;
	}
	
	c=i;
	for(int k=0;k<i;k++){
		int x=0;
		if(s[k].compare("")){
		
		w[k].a=s[k];
		w[k].count=1;
		}
		for(int p=k+1;p<i;p++){
			if(!s[p].compare(s[k])){
			s[p]="";
			w[k].count+=1;
			c--;
			x++;
			//cout<<"i:"<<i<<" "<<"c:"<<c<<endl;
			}
		}
	    if(w[k].a!="") cout<<w[k].a<<" "<<w[k].count<<endl;
	}
		
   
    
    cout<<endl;
   }
	return 0;  
}
