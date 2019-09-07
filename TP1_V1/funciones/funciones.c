#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "funciones.h"

/**
 * \brief Funcion para pedir un numero del 1 al 5
 * \param int opcion es la opcion
 * \param char mensaje[] es el menu de opciones
 * \param char error[] es el mensaje de error
 * \param int numMin es el numero minimo
 * \param int numMax es el numero maximo
 * \return int, retorna la opcion elegida
 */
int getOpcion(int* opcion, char mensaje[], char error[], int numMin, int numMax){

    int input= 0;

    do{
        printf(mensaje);
        scanf("%d",&input);
        
        if (input < 0 || input > 5){
            system("cls");
            printf(error);
            getchar();
        }
    }while(input > 5 || input < 0);

    *opcion = input;

    return input;

}

/**
 * \brief Funcion para pedir un operando
 * \param int a es el primer operando
 * \param int val1 es la validacion del primer operando
 * \param char mensaje[] es el mensaje
 * \param char error[] es el mensaje de error
 * \param int numMax es el numero maximo
 * \param int numMin es el numero minimo
 * \return int, retorna la opcion elegida
 */
int getNum1(int* a, int* val1, char mensaje[],char error[],int numMin, int numMax){
    
    int numero, aux = 1;

    while(numero != 0){
        printf(mensaje);
        scanf("%d",&numero);

        if (numero >=  numMin && numero <= numMax){
            break;
        } else {
            system("cls");
            printf(error);
            getchar();
        }

    }
    
    *a = numero;
    *val1 = aux;

    return 0;
}

/**
 * \brief Funcion para pedir un operando
 * \param int a es el primer operando
 * \param int val2 es la validacion del segundo operando
 * \param char mensaje[] es el mensaje
 * \param char error[] es el mensaje de error
 * \param int numMax es el numero maximo
 * \param int numMin es el numero minimo
 * \return int, retorna la opcion elegida
 */
int getNum2(int* b, int* val2, char mensaje[],char error[],int numMin, int numMax){
    
    int numero, aux = 1;

    while(numero != 0){
        printf(mensaje);
        scanf("%d",&numero);

        if (numero >=  numMin && numero <= numMax){
            break;
        } else {
            system("cls");
            printf(error);
            getchar();
        }
    }
    
    *b = numero;
    *val2 = aux;

    return 0;
}

/**
 * \brief Funcion para la suma
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int suma(int a,int b){
    int r1;
    r1 = a+b;
    return r1;
}

/**
 * \brief Funcion para la resta
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int resta(int a,int b){
    int r2;
    r2 = a-b;
    return r2;
}

/**
 * \brief Funcion para la division
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int divir(int a,int b){
    int r3;
    if (b == 0){
        return 0;
    } else {
        r3 =(float) a/b;
    }
    return r3;

}

/**
 * \brief Funcion para la multiplicacion
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int multiplicar(int a,int b){
    int r4;
    r4 = a*b;

    return r4;
}

/**
 * \brief Funcion para el factorial
 * \param int a es el primer operando
 * \param int b es el segundo operando
 * \return int, retorna la respuesta
 */
int factorial(int fact, char errorFactorial[]){
    int fac, i;
    fac = fact;

    if (fact <1 ){
        printf(errorFactorial);
    }

    for(i = fact-1; i >= 1; i--){
        fac = fac*i;
    }    

    return fac;
}