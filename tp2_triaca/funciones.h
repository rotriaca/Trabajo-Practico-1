#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAM 20


typedef struct
{
    char nombre[50];
    int edad;
    long int dni;
    int estado;


} ePersona;

/** \brief carga los datos de las personas
 *
 * \param el array se pasa como parametro
 * \return no retorna ningun dato
 *
 */
void cargarPersona(ePersona[]);


/** \brief borra una persona
 *
 * \param el array se pasa como parametro
 * \return no retorna ningun dato
 *
 */
void borrarPersona(ePersona[]);


/** \brief ordena alfabeticamente las personas
 *
 * \param el array se pasa como parametro
 * \return no retorna ningun dato
 *
 */
void ordenar(ePersona[]);


/** \brief lista las personas por pantalla
 *
 * \param el array se pasa como parametro
 * \return no retorna ningun dato
 *
 */
void mostrarPersonas(ePersona[]);


/** \brief muestra un grafico por edades
 *
 * \param el array se pasa como parametro
 * \return no retorna ningun dato
 *
 */
void grafico(ePersona[]);


#endif // FUNCIONES_H_INCLUDED
