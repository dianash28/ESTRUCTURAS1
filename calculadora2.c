#include <math.h>
#include <stdio.h>

float suma(float numero1, float numero2, float *resultado );
float resta(float numero1, float numero2, float *resultado );
float multiplicacion(float numero1, float numero2, float *resultado );
float division(float numero1, float numero2, float   *resultado );
float potencia(float numero1, float numero2,  float *resultado );
float modulo(float  numero1, float numero2,  float *resultado );
float raiz(float numero1, float numero2,  float *resultado);
float main()
 {
    float  numero1, numero2, resultado,resultado1;
    int opcion;
    int valido = 1;
 
   // printf("quiere hacer alguna operacion : ");
    //scanf("%d", &valido);
    printf("Ingrese operacion que desee realizar : ");
    scanf("%f", &opcion);
    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);
   
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
        printf("El resultado es %f\n", resultado);
    else
        printf("Operacion invalida\n");
        
    fflush(stdin);
    getchar();
    return 0;
}

 float suma(float numero1, float numero2, float*resultado)
{
  *resultado=numero1+numero2;
  return 0;
}
float resta(float numero1, float numero2,float *resultado )
{
  *resultado=numero1-numero2;
  return 0;

}
float multiplicacion(float numero1, float numero2, float *resultado )
{
  *resultado=numero1*numero2;
  return 0;

}
float division(float numero1, float numero2, float *resultado )
{
  *resultado=numero1/numero2;
  return 0;

}
float potencia(float numero1, float numero2,  float *resultado )
{
   *resultado=numero1 ^ numero2;
  return 0;
}
float modulo(float numero1, float numero2,  float *resultado )
{
   *resultado=numero1%numero2;
  return 0;
}
float raiz(float numero1, float numero2,  float *resultado)
{float  suma;
   suma=numero1+numero2;
   *resultado=sqrt(suma);
  return 0;
}