
#include "funciones.h"

int main()
{
    int opcion =0;
    float a= 0;
    float b= 0;
    float resultado;
    do
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%f)\n", a);
        printf("2- Ingresar 2do operando (B=%f)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("Elija una opcion \n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("Ingrese el primer numero: \n");
            scanf("%f", &a);
            break;
        case 2:
            printf("Ingrese el segundo numero: \n");
            scanf("%f", &b);
            break;
        case 3:
            resultado = suma(a,b);
            printf("La suma de los numeros ingresados es: %f\n", resultado);
            system("pause");
            break;
        case 4:
            resultado = resta(a,b);
            printf("La resta de los numeros ingresados es: %f\n", resultado);
            system("pause");
            break;
        case 5:
            if(b != 0)
            {
                resultado = division(a,b);
                printf("La division de los numeros ingresados es: %f\n", resultado);
            }
            else
            {
                printf("ERROR. No se puede dividir por 0, por favor, reingrese operando 2\n");
            }
            system("pause");
            break;
        case 6:
            resultado = multip(a,b);
            printf("La multiplicacion de los numeros ingresados es: %f\n", resultado);
            system("pause");
            break;
        case 7:
            resultado = factor(a);
            if (resultado != 0)
            {
                resultado = factor(a);
                printf("El factorial del primero operando es: %f\n", resultado);
            }
            else
            {
                printf("Error. La factorizacion solo puede hacerse con numeros mayores a 0. Reingrese: \n");
            }
            system("pause");
            break;
        case 8:
            resultado = suma(a,b);
            printf("La suma de los numeros ingresados es: %f\n", resultado);
            resultado = resta(a,b);
            printf("La resta de los numeros ingresados es: %f\n", resultado);
            resultado = division(a,b);
            printf("La division de los numeros ingresados es: %f\n", resultado);
            resultado = multip(a,b);
            printf("La multiplicacion de los numeros ingresados es: %f\n", resultado);
            if(b != 0)
            {
                resultado = division(a,b);
                printf("La division de los numeros ingresados es: %f\n", resultado);
            }
            else
            {
                printf("ERROR. No se puede dividir por 0, por favor, reingrese operando 2\n");
            }
            resultado = factor(a);
            if (resultado != 0)
            {
                resultado = factor(a);
                printf("El factorial del primero operando es: %f\n", resultado);
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
