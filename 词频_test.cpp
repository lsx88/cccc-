#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int Count,i,j,k;
	char c;
	string t;
	string a[100];
	c=getchar();
	while(c!=EOF)
	{
		while(c!='\n'&&c!=EOF)
		{
			t="";
			while(c!=' '&&c!='\n'&&c!=EOF)
			{
				t+=c;
				c=getchar();
			}
			if(c==' ')c=getchar();
			a[Count]=t;
			Count++;
		}
		c=getchar();
		for(i=0;i<Count;i++)
		{
			if(a[i]=="")continue;
			k=1;
			for(j=i+1;j<Count;j++)
				if(a[j]==a[i])a[j]="",k++;
			cout<<a[i]<<' '<<k<<endl;
			a[i]="";
		}
		Count=0;
		if(c!=EOF)cout<<endl;
	}
	return 0;
}

