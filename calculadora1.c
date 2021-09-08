#include <math.h>
#include <stdio.h>

int suma(int numero1, int numero2, int *resultado );
int resta(int numero1, int numero2, int *resultado );
int multiplicacion(int numero1, int numero2, int *resultado );
int division(int numero1, int numero2, int  *resultado );
int potencia(int numero1, int numero2,  int *resultado );
int modulo(int numero1, int numero2,  int *resultado );
int raiz(int numero1, int numero2,  int *resultado);
int main()
 {
    int  numero1, numero2, resultado,resultado1;
    int  opcion;
    int valido = 1;
 
   // printf("quiere hacer alguna operacion : ");
    //scanf("%d", &valido);
    printf("Ingrese operacion que desee realizar : ");
    scanf("%d", &opcion);
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);
   
       switch (opcion)
     {
        case 1:
           suma( numero1, numero2, &resultado );
            break;
        case 2:
           resta( numero1,  numero2, &resultado );
            break;
        case 3:
            multiplicacion( numero1, numero2, &resultado );
            break;
        case 4:
            division( numero1,  numero2, &resultado );
            break;
       case 5:
             potencia( numero1,  numero2, &resultado );
            break;
       case 6:
             modulo( numero1,  numero2, &resultado );
            break;  
       case 7:
             raiz( numero1,  numero2, &resultado );
            break;     

            
        default:
            valido = 0;
     }
    
    
    if (valido)
        printf("El resultado es %d\n", resultado);
    else
        printf("Operacion invalida\n");
        
    fflush(stdin);
    getchar();
    return 0;
}

 int suma(int numero1, int numero2, int*resultado)
{
  *resultado=numero1+numero2;
  return 0;
}
int resta(int numero1, int numero2,int *resultado )
{
  *resultado=numero1-numero2;
  return 0;

}
int multiplicacion(int numero1, int numero2, int *resultado )
{
  *resultado=numero1*numero2;
  return 0;

}
int division(int numero1, int numero2, int *resultado )
{
  *resultado=numero1/numero2;
  return 0;

}
int potencia(int numero1, int numero2,  int *resultado )
{
   *resultado=numero1^numero2;
  return 0;
}
int modulo(int numero1, int numero2,  int *resultado )
{
   *resultado=numero1%numero2;
  return 0;
}
int raiz(int numero1, int numero2,  int *resultado)
{int suma;
   suma=numero1+numero2;
   *resultado=sqrt(suma);
  return 0;
}




