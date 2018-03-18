#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct word{
	string a;
	int count;
}w[100]; 

int main(){
	string str;
	//map<string, int>::iterator iter; 
	while(1){
		map<string,int> mapchar;
		string a[100];
		int i=0;
	
		while(cin>>str){
		int flag=0;
		int k=0;
		for(k=0;k<=i;k++)
			if(w[k].a==str){
			flag=1;
			break;
		}
		if(flag==1) w[k].count+=1;
		else{
			i+=1;
			w[i].a=str;
			w[i].count=1;
		}
		
//		iter=mapchar.find(str);
//		if(mapchar.find(str)!=mapchar.end()) 
//			iter->second+=1;
//		else{
//			a[i]=str;
//			i++;
//			mapchar[str]=1;
//			w[i].a=str;
//			w[i].count=1;
//		}
		if(getchar()=='\n') break;
	}
//	map<string, int>::iterator iter1;  
//	for(iter1 = mapchar.begin(); iter1!= mapchar.end(); iter1++)  
//       cout<<iter1->first<<" "<<iter1->second<<endl;
    
    for(int j=1;j<=i;j++){
//    	iter1=mapchar.find(a[j]);
//    	cout<<a[j]<<" "<<iter1->second<<endl;
		cout<<w[j].a<<" "<<w[j].count<<endl;
	}
    cout<<endl;
   }
	return 0;  
}
