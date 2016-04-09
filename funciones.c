#include <stdio.h>
#include <stdlib.h>

float suma(float a,float b)//Funcion que calcula la suma.
{
    float total;
    total=a+b;
    return total;
}

float resta(float a,float b)//Funcion que calcula la resta.
{
    float total;
    total=a-b;
    return total;
}

float division(float a,float b)//Funcion que calcula la division.
{
    float total;
    total=a/b;
    return total;
}

float multiplicacion(float a,float b)//Funcion que calcula la multiplicacion.
{
    float total;
    total=a*b;
    return total;
}
int factorial(int a)//Funcion que calcula el factorial.
{
    int i;
    int factorial=1;
    for(i=1;i<=a;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
