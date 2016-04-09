#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x,y,resultado;
    int flag=0;

    while(seguir=='s')//validacion, si seguir o no con el programa.
    {
        printf("Bienvenido a Calculadora!\n\n");
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("\nIngrese Opcion:");
        scanf("%d",& opcion);

        while(opcion<=0 || opcion>9)//validacion, el numero ingresado debe ser correspondiente al menu.
        {
            printf("La opcion ingresada no existe en el menu, Porfavor reingrese:");
            scanf("%d",&opcion);
        }

        if(flag==0)//Primera vez.
            {
                while(opcion != 1 && opcion!= 2 && opcion!=9)//validacion, el usuario no podra calcular hasta que ingrese operandos o decida salir del programa.
                {
                printf("\nError debe ingresar operandos para calcular\n");
                printf("\nReingrese Opcion:");
                scanf("%d",& opcion);
                }
                flag=flag+1;
            }

        switch(opcion)//Opciones el menu.
        {

            case 1://Ingresa y muestra 1er operando.
                printf("Ingrese 1er operando:");
                scanf("%f",&x);
                printf("El numero ingresado es: %.2f\n",x);
                system("pause");
                system("cls");
                break;

            case 2://Ingresa y muestra 2do operando.
                printf("Ingrese 2do operando:");
                scanf("%f",&y);
                printf("El numero ingresado es: %.2f\n",y);
                system("pause");
                system("cls");
                break;
            case 3://Calcula y muestra suma.
                resultado = suma(x,y);
                printf("La suma es: %.2f\n\n",resultado);
                system("pause");
                system("cls");
                break;

            case 4://calcula y muestra resta.
                resultado = resta(x,y);
                printf("La resta es: %.2f\n\n",resultado);
                system("pause");
                system("cls");
                break;

            case 5://calcula y muestra division
                while(x==0 || y==0)//validacion, en el caso de ingresar "0" como operando resulta error.
                {
                    if(x==0)
                    {
                        printf("Error Reingrese operando distinto de 0: ");
                        scanf("%f",&x);
                    }
                    if(y==0)
                    {
                        printf("Error Reingrese operando distinto de 0: ");
                        scanf("%f",&y);
                    }
                }
                resultado = division(x,y);
                printf("La division es: %.2f\n\n",resultado);
                system("pause");
                system("cls");
                break;
            case 6://calcula y muestra mulplicacion.
                resultado=multiplicacion(x,y);
                printf("La multipliacion es: %.2f\n\n",resultado);
                system("pause");
                system("cls");
                break;
            case 7://calcula y muestra factorial.
                resultado=factorial(x);
                printf("El factorial del numero %.2f es: %.2f\n",x,resultado);
                system("pause");
                system("cls");
                break;
            case 8://calcula y muestra todas las funciones con validacion de errores mencionados en casos anteriores.
                resultado = suma(x,y);
                printf("La suma es: %.2f\n",resultado);

                resultado = resta(x,y);
                printf("La resta es: %.2f\n",resultado);

                resultado=multiplicacion(x,y);
                printf("La multipliacion es: %.2f\n",resultado);

                resultado=factorial(x);
                printf("El factorial del numero %.2f es: %.2f\n",x,resultado);

                while(x==0 || y==0)//validacion, en el caso de ingresar "0" como operando resulta error.
                {
                    if(x==0)
                    {
                        printf("Error Reingrese 1er operando distinto de 0 para dividir: ");
                        scanf("%f",&x);
                    }
                    if(y==0)
                    {
                        printf("Error Reingrese 2do operando distinto de 0 para dividir: ");
                        scanf("%f",&y);
                    }
                }
                resultado = division(x,y);
                printf("La division es: %.2f\n\n",resultado);

                system("pause");
                system("cls");
                break;
            case 9://Salida del programa
                printf("Hasta luego");
                seguir ='n';
                break;
        }
    }
            return 0 ;
}

