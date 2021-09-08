#include <math.h>
#include <stdio.h>

float potencia(float base, int exponente) 
{
    float resultado = 1;
    int i;
    for (i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}


int main() {
    float numero1, numero2, resultado;
    char opcion;
    int valido = 1;

    printf("Ingrese operacion que desee realizar : ");
    scanf("%c", &opcion);
    printf("Ingrese el primer numero: ");
    scanf("%f", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &numero2);

    switch (opcion)
     {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
        case 'x':
            resultado = numero1 * numero2;
            break;
        case '/':
            resultado = numero1/ numero2;
            break;
        case '^':
            resultado = potencia(numero1, (int) numero2);
            break;
         case '%':
            resultado=numero1% numero2;
            break;
         case 'r':
            resultado = sqrt(numero1), sqrt(numero2);
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