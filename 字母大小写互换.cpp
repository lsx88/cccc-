#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[100];
	int i=0;
//    while(scanf("%c",&a[i]),a[i]!='\n'){  	
//		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
//		else if(a[i]>='a'&&a[i]<='z') a[i]-=32;
//	   i++;
//	}
//	a[i]='\0';  
    gets(a);
    for(int i=0;i<strlen(a);i++){
    	if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
		else if(a[i]>='a'&&a[i]<='z') a[i]-=32;
	}
    printf("%s",a);  

    return 0;
}
