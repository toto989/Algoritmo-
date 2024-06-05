/*Escribir un programa que:
- Declare 3 variables char, int y double.
- Solicitar al usuario el ingreso del valor de las mismas en tiempo de ejecuci�n usando scanf().
- Imprimir por pantalla los valores de las 3 variables junto a alguna leyenda descriptiva del
contenido.

Nombre: Ingreso de datos con la funci�n scanf.

Objetivo: Declarar 3 variables de tipo char, int y double, solicitando el ingreso del valor de las mismas para que se ejecute usando scanf,
imprimindo en pantalla los valores.

Estrategia:
	-ingrese un caracter.
	-ingresar un entero.
	-ingresar un float.
	
Nombres representativos:
	-unCaracter
	-unEntero
	-unFloat
*/


#include <stdio.h>


int main(){

	char unCaracter; 
	int unEntero;
	float unFloat; 

	printf("Ingrese un caracter: ");
    scanf(" %c", &unCaracter);

    printf("Ingrese un entero: ");
    scanf("%d", &unEntero);

    printf("Ingrese un n�mero flotante: ");
    scanf("%f", &unFloat);

	printf("\nValor del caracter: %c\n", unCaracter);
    printf("Valor del entero: %d\n", unEntero);
    printf("Valor del n�mero flotante: %.2f\n", unFloat);
 
	



}	
	
	

