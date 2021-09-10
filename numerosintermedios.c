#include <stdio.h>
int numerosintermedios(int numero1, int numero2);
int main()
{
    int numero1, numero2;

    printf( "Introduzca el primero numero,%d",&numero1 );
    scanf( "%d", &numero1 );
    printf( "Introduzca el segundo numero,%d",&numero2 );
    scanf( "%d", &numero2 );
    numerosintermedios(numero1, numero2);
    fflush(stdin);
    getchar();
 return 0;
 }
int numerosintermedios(int numero1, int numero2)
{
     if ( numero1 <=numero2 )

        do
        {
            printf( "%d ",numero1);
            numero1++;

        } while ( numero1 <=numero2 );

    else
        printf( "este es un numero menor o igual a %d", numero2 );
return numero1++;
}

