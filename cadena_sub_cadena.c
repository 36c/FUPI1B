#include<stdio.h>
char cadena[20],cadena2[50];
int i;
int main()
{
	printf("ingresa la cadena(palabra)\n");
	scanf("%s",&cadena);
	printf("ingresa la sub_cadena\n");
	scanf(" %c",&cadena2);
	for(i=0;i<20;i++)
	{
		if(cadena[i]==cadena2)
		{
		if(subcadena[i]=='\0')
			
			printf("existe\n")//if(subcadena[i]=='\0')
		}
        else
		{
			
			
			printf("no existe\n");
		}
	}
}
