#include<stdio.h>
#include<stdlib.h>
#define WORDSIZE 3
void GeraPalavras(int i,char* p,int n)
{
	int j;
	char c;
	if(i==0)
	{
		printf("%s\t",p);
	}
	else
	{
		for(j=0;j<('z'-'a'+1);j++)
		{
			p[n-i]='a'+j;
			GeraPalavras(i-1,p,n);
		}
		for(j=0;j<('Z'-'A'+1);j++)
		{
			p[n-i]='A'+j;
			GeraPalavras(i-1,p,n);
		}
	}
}

int main (void)
{
	char* p;
	p=(char*)malloc(2);
	p[WORDSIZE]=0; //null
	GeraPalavras(WORDSIZE,p,WORDSIZE);
	return 0;
}
