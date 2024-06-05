/*

Escribir en C un programa que inicialice una 
variable de tipo float y otra de tipo double. 
Asignarle el valor -123000.567. Formatear la salida 
para que el valor de la variable se visualice:
- En su formato original
- Utilizando 2 caracteres para la parte decimal
- Solo la parte entera

Nombre: variables tipo float y double
Objetivo: mostrar las variables en su formato original, con 2 caracteres para la parte decimal y solo la parte entera
estrategia:
	-crear una variable float y asignarle el valor -123000.567
	-crear una variable double y asignarle el valor -123000.567
Nombres representativos:
	-unFloat
	-unDoble
*/




#include <stdio.h>


int main() {
	
  float unFloat = -123000.567;
  double unDoble = -123000.567;
  
	printf("Variable float con valor negativo:\n");
	printf("\t formato original: %f \n", unFloat);
	printf("\t con dos decimales: %.2f \n", unFloat);
	printf("\t solo parte entera: %d \n\n", (int)unFloat);
	
	printf("Variable double con valor negativo:\n");
	printf("\t formato original: %lf \n", unDoble);
	printf("\t con dos decimales: %.21f \n", unDoble); 
	printf("\t solo parte entera: %d \n\n", (int)unDoble);

	
}

