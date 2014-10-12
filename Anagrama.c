#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static int DiffFromVector(char x, char* vector,int n) //Different 1 , equal 0;
{
	int i;
	for (i=0;i<n;i++)
		if(*(vector+1)!=x)
			return 1; //if different at any point
	return 0; //else return 0
}
static char* GetWordChars(char* palavra)
{
	char* charlist;
	char* p; // Percorredor
	int i;
	charlist=(char*)malloc(strlen(palavra)+1); //Maximum List size
	*charlist=*palavra; //first character on list; Always
	for(p=palavra+1,i=0;*p;p++,i++)
	{   printf("%c",*p);
		if(DiffFromVector(*p+1,palavra,i+1))
			*(charlist+1+i)=*p;

	}
	*(charlist+i+1)=0; //null
	return charlist;
}
static void AnagramaSemVogal(char* palavra)
{
	char* p;

	for(p=palavra;*p;p++)
	{


	}
}

void anagramas(char** palavras,  int tam)
{
	int i;
	for(i=0;i<tam;i++)
	{
		AnagramaSemVogal(palavras[i]);
	}


} 
int main (void)
{
	printf("Chars of Palavra %s : {%s}\n","naegele",GetWordChars("naegele"));
	return 0;

}
