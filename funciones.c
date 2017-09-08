#include "funciones.h"

float suma(float n1, float n2)
{

    float resultado;

    resultado = n1 + n2;

    return resultado;
}

float resta(float n1, float n2)
{

    float resultado;

    resultado = n1 - n2;

    return resultado;
}

float division(float n1, float n2)
{

    float resultado;

    resultado = n1 / n2;

    return resultado;
}

float multip(float n1, float n2)
{

    float resultado;

    resultado = n1 * n2;

    return resultado;
}

float factor(float n1)
{

    if(n1>0)
    {
    float resultado=1;
    float i;
    for(i= n1; i>1; i--)
    {
        resultado= resultado * i;

    }
return resultado;
    }
    else
        {
        return 0;
        }
}
