/*Escribir un programa que inicialice las variables con los siguientes valores (las variables numéricas tienen
el valor máximo positivo del rango de representación):
- float unFloat = 3.4E+38;
- double unDouble = 1.7E+308;
- int unEntero = 2147483647;
- short unShort = 32767;
- char unCaracter = 'Z';
- long unLong = 2147483647;
Utilizando el operador sizeof() y la función printf(), imprimir por cada variable su tamaño, su valor, e
indicar, con una leyenda, su tipo de dato.


Nombre: Programa que inicie con las variables float, double, int, short, char, long.
Objetivo: Escribir un programa que inicialice las variables con los siguientes valores

Estrategia:
	-Escribir un float con su valor determinado
	-Escribir un double con su valor determinado
	-Escribir un int con su valor determinado
	-Escribir un short con su valor determinado
	-Escribir un caracter con su valor determinado
	-Escribir un long con su valor determinado
Nombres representativos:
	-unFloat
	-unDouble
	-unEntero
	-unCaracter
	-unShort
	-unLong
*/



#include <stdio.h>


int main(){

	float unFloat = 3.4E+38;;
	double unDoble = 1.7E+308; 
	int unEntero = 2147483647;
	char unCaracter = 'Z'; 
	short unShort = 32767;
	long unLong = 2147483647;
 
	printf("El tamaño de la variable de tipo: \n");
	printf("\t float	    es %d bytes y su valor es %e \n", sizeof(unFloat), unFloat); 
	printf("\t double		es %d bytes y su valor es %e \n", sizeof(unDoble), unDoble); 
	printf("\t entero	    es %d bytes y su valor es %d \n", sizeof(unEntero), unEntero); 
	printf("\t entero corto es Xd bytes y su valor es %d \n", sizeof(unShort), unShort);
	printf("\t char			es %d bytes y su valor es %c \n", sizeof(unCaracter), unCaracter);
	printf("\t entero largo es %d bytes y su valor es %ld \n", sizeof(unLong), unLong);
	 
	
 




}	
	


