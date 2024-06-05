/*

Modifique los valores a cantidades que excedan el rango (por ejemplo, asigne 40000 a la variable unShort). 
¿Qué sucede?

nombre: asignar otro valor a la variable unShort.

objetivo: ver que sucede cuando se le asigna otro valor a la varialbe unShort-

estrategia:
	-agregar una variable float con su valor asignado.
	-agregar una variable double con su valor asignado.
	-agregar una variable int con su valor correspondiente.
	-agregar una variable char con su valor correspondiente.
	-cambiar el valor de la variable unShort.
	-agregar una variable long con su valor correspondiente.

Nombres representativos:	
	-unFloat
	-unDoble
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
	short unShort = 40000; 
	long unLong = 2147483647;
 
	printf("El tamaño de la variable de tipo: \n");
	printf("\t float	    es %d bytes y su valor es %e \n", sizeof(unFloat), unFloat); 
	printf("\t double		es %d bytes y su valor es %e \n", sizeof(unDoble), unDoble); 
	printf("\t entero	    es %d bytes y su valor es %d \n", sizeof(unEntero), unEntero); 
	printf("\t entero corto es Xd bytes y su valor es %d \n", sizeof(unShort), unShort);
	printf("\t char			es %d bytes y su valor es %c \n", sizeof(unCaracter), unCaracter);
	printf("\t entero largo es %d bytes y su valor es %ld \n", sizeof(unLong), unLong);
	 
	
 




}	
	
/*

al ejecutar el valor de un short no muestra 40000 si no que dice "es Xd bytes y su valor es 2"

*/
