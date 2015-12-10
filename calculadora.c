#include<stdio.h>
main()
{
    int m, c;
    printf("dame un numero: ");
    scanf("%d", &m);
    printf("dame otro numero: ");
    scanf("%d", &c);
    printf("\n La suma es: %d", suma(m, c));
    printf("\n La resta es: %d", resta(m, c));
    printf("\n La multiplicacion  es: %d", multiplicacion(m, c));
    printf("\n La division es: %f", division(m,c));
 
}
 
 
 
suma(int m, int c)
{
    return(m + c);
}
 
resta(int m, int c)
{
    return(m - c);
}
 
multiplicacion(int m, int c)
{
    return(m * c);
}
 
division(int m, int c)
{
    return(m / c);
}
