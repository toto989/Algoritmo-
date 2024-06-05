/*

Escribir un programa que permita ingresar por teclado una frase (la frase termina con un punto) y cuente 
e informe la cantidad de veces que aparece una vocal en la cadena (por ejemplo, cuántas veces aparece 
la vocal “a”). La vocal se ingresa por teclado. Resuelva el ejercicio utilizando al menos una función.

Nombre: ingresar una frase

Objetivo: ingresar una frase y calcular cuantas veces se repite una vocal

Estrategia: 
	-Ingresar una frase.
	-Ingresar una vocal
		-Contar las vocales.
	-Informar la cantidad de vocales.
	
Nombres representativos:
	-ingresarFrase
	-ingresarVocal
		-contarVocal
	-informarCantidad
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h> 

typedef char tString[100];

void ingresarFrase();
void ingresarVocal();
int contarVocal();
void informarCantidad();

tString frase;
char vocal;


int main(){
	ingresarFrase();
	ingresarVocal();
	informarCantidad();
	return 0;
}

void ingresarFrase(){
	printf("Ingrese una frase (para finalizar usar un '.' (punto)): ");
	scanf("%[^.]s", &frase);
	fflush(stdin);
}

void ingresarVocal(){
	printf("\nIngrese la vocal que desea contar: ");
	scanf("%c", &vocal);
	fflush(stdin);
}

int contarVocal(){

	int i;
	int contador = 0;
	
	for (i = 0; i <= strlen(frase); i++){
		if (frase[i] == vocal){
			contador++;
		}
	}
	return contador;
}


void informarCantidad(){
	printf("\nLa vocal '%c' se repite %d veces ", vocal, contarVocal());
}



/*

Casos de prueba:
1)
frase: habia una vez truz.
vocal: a
2)
frase: susanita tenia un raton.
vocal: u
3)
frase: hola mundo
vocal: Ó
4)
frase: hola
vocal: A

*/
