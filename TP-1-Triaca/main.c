#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    int opcion =0;
    float primerNumero= 0;
    float segundoNumero= 0;
    float resultado;
    do
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%.2f)\n2- Ingresar 2do operando (B=%.2f)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n", primerNumero, segundoNumero);
        printf("Elija una opcion \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el primer numero: \n");
            scanf("%f", &primerNumero);
            break;
        case 2:
            printf("Ingrese el segundo numero: \n");
            scanf("%f", &segundoNumero);
            break;
        case 3:
            resultado = suma(primerNumero,segundoNumero);
            printf("La suma de los numeros ingresados es: %.2f\n", resultado);
            system("pause");
            break;
        case 4:
            resultado = resta(primerNumero,segundoNumero);
            printf("La resta de los numeros ingresados es: %.2f\n", resultado);
            system("pause");
            break;
        case 5:
            if(segundoNumero != 0)
            {
                resultado = division(primerNumero,segundoNumero);
                printf("La division de los numeros ingresados es: %.2f\n", resultado);
            }
            else
            {
                printf("ERROR. No se puede dividir por 0, por favor, reingrese operando 2\n");
            }
            system("pause");
            break;
        case 6:
            resultado = multip(primerNumero,segundoNumero);
            printf("La multiplicacion de los numeros ingresados es: %.2f\n", resultado);
            system("pause");
            break;
        case 7:
            resultado = factor(primerNumero);
            if (resultado != 0)
            {
                resultado = factor(primerNumero);
                printf("El factorial del primero operando es: %.2f\n", resultado);
            }
            else
            {
                printf("Error. La factorizacion solo puede hacerse con numeros mayores a 0. Reingrese: \n");
            }
            system("pause");
            break;
        case 8:
            resultado = suma(primerNumero,segundoNumero);
            printf("La suma de los numeros ingresados es: %.2f\n", resultado);
            resultado = resta(primerNumero,segundoNumero);
            printf("La resta de los numeros ingresados es: %.2f\n", resultado);
            resultado = division(primerNumero,segundoNumero);
            printf("La division de los numeros ingresados es: %.2f\n", resultado);
            resultado = multip(primerNumero,segundoNumero);
            printf("La multiplicacion de los numeros ingresados es: %.2f\n", resultado);
            if(segundoNumero != 0)
            {
                resultado = division(primerNumero,segundoNumero);
                printf("La division de los numeros ingresados es: %.2f\n", resultado);
            }
            else
            {
                printf("ERROR. No se puede dividir por 0, por favor, reingrese operando 2\n");
            }
            resultado = factor(primerNumero);
            if (resultado != 0)
            {
                resultado = factor(primerNumero);
                printf("El factorial del primero operando es: %.2f\n", resultado);
            }
            else
            {
                printf("Error. La factorizacion solo puede hacerse con numeros mayores a 0. Reingrese: \n");
            }
            system("pause");
            break;
        case 9:
            break;

        default:
            printf("Error, ingrese una opcion valida");
            system("pause");
        }

    }
    while(opcion != 9);

    return 0;


}
