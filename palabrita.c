#include<stdio.h>
char cadena [50];
char buscar;
char remplazar;
int i;
int main()
{
	scanf("%s",cadena),
	scanf(" %c",&buscar);
	scanf(" %c",&remplazar);
	for(i=0;i<50;i++)
	{
		if(cadena[i]==buscar)
		{
			cadena[i]=remplazar;
		}
		
	}
	printf("%s",cadena);
}

