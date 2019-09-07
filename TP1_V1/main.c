#include <stdio.h>
#include <stdlib.h>
#include "funciones\funciones.h"

int main()
{
    int a, b;
    int opcion, r1, r2, r4, r5, r6;
    float r3; 
    int val1, val2, val3=0;
    char menuOpciones[] =
                "\nIngrese una opcion del menu \n\
                 \n1- Ingresar primer operando\
                 \n2- Ingresar segundo operando\
                 \n3- Calcular todas las operaciones\
                 \n4- Informar resultados\
                 \n5- Salir\n\
                 \nIngrese opcion: ";
    char errorMenu[] = "\nError. Debe elegir una opcion del 1 al 5\n";
    char ingresarNumero[] = "Ingresar el operando: ";
    char errorNumero[] = "\nError. Ingese un numero del -32768 al 32767\n";
    char errorIngreseOperandos[] = "\nError. Primero debe ingresar los Operandos.\n";
    char errorCalcularOperaciones[] = "\nError. Primero debe calcular las operaciones.\n";
    char keyPress[] = "\n\nPresione [Enter] para continuar.\n";
    char errorDividirPorCero[] = "Error. No se puede divir por cero.\n";
    char errorFactorial[] = "Error. No se puede obtener el factorial\n";

    a = 0;
    b = 0;
    do{
        system("cls");
        opcion = 0;
        printf("Operando 1: %d\n", a);
        printf("Operando 2: %d\n", b);
        getOpcion(&opcion, menuOpciones, errorMenu, 1, 5);

        switch(opcion){
        
        case 1:
            getNum1(&a, &val1, ingresarNumero, errorNumero, -32768 , 32767);
            break;
        case 2:
            getNum2(&b, &val2, ingresarNumero, errorNumero, -32768 , 32767);
            break;
        case 3:
            system("cls");
            if (val1 != 1 && val2 != 1){
                printf(errorIngreseOperandos);
                printf("\nPresione [Enter] para continuar\n");
                while(getchar()!='\n');
                getchar();
            } else {
                r1 = suma(a, b);
                r2 = resta(a, b);
                r3 = divir(a, b);
                r4 = multiplicar(a, b);
                r5 = factorial(a, errorFactorial);
                r6 = factorial(b, errorFactorial);

                val3 = 1;
            }
            break;
        case 4:
            system("cls");
            if (val3 != 1){
                printf(errorCalcularOperaciones);
                printf("\nPresione [Enter] para continuar\n");
                while(getchar()!='\n');
                getchar();
            } else {
                printf("La suma es: %d\n",r1);
                printf("La resta es: %d\n",r2);
                if (b == 0){
                    printf(errorDividirPorCero);
                } else {
                    printf("La division es: %.2f\n",r3);
                }

                printf("La multiplicacion es: %d\n",r4);

                printf("El factorial de %d es: %d\n", a, r5);
                printf("El factorial de %d es: %d\n", b, r6);

                printf(keyPress);
                while(getchar()!='\n');
                getchar();

                val1 = 0;
                val2 = 0;
                val3 = 0;
                a = 0;
                b = 0;
            }
            break;
        case 5:
            break;
        default:
            printf(keyPress);
            getchar();
            break;
        }

    }while(opcion != 5);

    return 0;
}
