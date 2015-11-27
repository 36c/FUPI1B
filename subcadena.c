#include<stdio.h>
char cadena [50];
char subcadena [50];
int i=0;
int j=0;
int main()
{
	printf("ingresa la cadena(palabra)\n");
	scanf("%s",cadena);
	printf("ingresa la sub_cadena\n");
	scanf("%s",subcadena);
 while(cadena[i]!='\0')
{
 for(i=0;i<50;i++)
 for(j=0;j<50;j++)
	{
		if(subcadena[j]=='\0')
			while(cadena[i]==subcadena[j])
			{
			i++;
			j++; 	
			}
			else
			{
				printf("no existe\n");
			i++;
			{
				printf("existe\n");
				j++;
			}
				}
	}
}
}
