#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void funcionBienvenida(char* nombre);
void funcionDespedida(char* nombre);
void fDelegada(void(*punteroFuncion)(char* eldato),char* nombre);

int main()
{
    fDelegada(funcionBienvenida,"Natalia natali");
    getche();
    fDelegada(funcionDespedida,"Natalia natali");
    getche();
    //----------------------------------------------

    return 0;
}

void fDelegada(void(*punteroFuncion)(char* eldato),char* nombre)
{
    punteroFuncion(nombre);

}

void funcionBienvenida(char* nombre)
{
    printf("Bienvenida %s , a la empresa.",nombre);
}

void funcionDespedida(char* nombre)
{
    printf("aa %s",nombre);
}
