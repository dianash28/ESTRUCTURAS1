#include <stdio.h>
//pedir al usuario un numero entre 0 y 9 
// si el numero es mayor que 9, decirle que es incorrecto 
//si esta entre 0 y 9 tiene que imprimirlo el nombre del numero

int main ()
{
     int numero;
     printf("dame un numero");
     scanf("%d", &numero );
     if (numero<=9 && numero>=0)
    switch (numero)
    {
        case 0: 
                numero=0;
                printf ("cero");
                break;

        case 1: 
                numero=1;
                printf ("uno");
                 break;

         case 2: 
                numero=2;
                printf ("dos");
                break;

         case 3: 
                numero=3;
                printf ("tres");
                break;

         case 4: 
                numero=4;
                printf ("cuatro");
                break;

        case 5: 
                numero=5;
                printf ("cinco");
                break;

         case 6: 
                numero=6;
                printf ("seis");
                break;

         case 7: 
                numero=7;
                printf ("siete");
                break;

        
         case 8: 
                numero=8;
                printf ("ocho");
                break;

         case 9: 
                numero=9;
                printf ("nueve");
                break;   
        //default:
          //    printf("este caso no es correcto");
    }
      return 0;
}