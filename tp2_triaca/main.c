#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "funciones.h"


int main()
{
    ePersona personas[20];
    int opcion, i;
    char seguir='s';

    for(i=0; i<TAM; i ++) //UTILIZAMOS EL FOR PARA CARGAR TODOS LOS ESTADOS EN 0 Y PODER COMENZAR.
    {
        personas[i].estado = 0;
    }

    do
    {
        printf("\nIngrese una opcion:\n");
        printf("\n1. Agregar una persona\n");
        printf("2. Borrar una persona\n");
        printf("3. Imprimir lista ordenada por nombre\n");
        printf("4. Imprimir grafico de edades\n");
        printf("5. Salir\n");

        scanf("%d", &opcion);

        switch(opcion)
        {

        case 1:
            cargarPersona(personas);
            break;

        case 2:

            borrarPersona(personas);
            break;

        case 3:
            ordenar(personas);
            mostrarPersonas(personas);
            break;

        case 4:
            grafico(personas);
            break;
        case 5:
            seguir = 'n';
            break;
        default:

            printf("Ingrese una opcion del menu!!!\n");
            break;
        }
    }
    while(seguir=='s');

    return 0;
}
