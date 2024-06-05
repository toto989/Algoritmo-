/*
Un supermercado dispone de la siguiente información relacionada con sus productos: código de producto, 
descripción, precio de costo y precio sugerido. Se solicita escribir un programa que permita ingresar los 
datos del producto (código de producto, descripción, precio de costo) y calcular el precio sugerido (aplicar 
el 30% del precio de costo). El programa debe incluir la declaración de una estructura compuesta que 
permita modelar los datos de los productos. El programa finaliza cuando el usuario ingresa -1 en el código 
del producto.

Nombre: Supermercado datos del producto

Objetivo: Escribir un programa que permita ingresar los datos del producto y calcular el precio sugerido 

Estrategia:
	-Ingresar codigo de producto.
	-Ingresar descripcion del producto.
	-Ingresar precio de costo.
		-Calcular precio sugerido.

Nombres representativos:
	-ingresarCodigoProducto
	-ingresarDescripcion
	-ingresarPrecio
		-calPrecioSugerido

*/


#include <stdio.h>
#include <string.h>
#include <ctype.h> 

struct {
	int codigoProducto;
	char descripcion[100];
	int precio;
	float precioSugerido;
}producto;


void inicializarVariables();
void ingresarCodigoProducto();
void ingresarDescripcion();
void ingresarPrecio();
void calPrecioSugerido();



int main(){
	
	inicializarVariables;
	ingresarCodigoProducto;
	ingresarDescripcion;
	ingresarPrecio;
	
	return 0;
}

void inicializarVariables(){
	 while (1) {
        ingresarCodigoProducto(&producto);
        if (producto.codigoProducto == -1) {
            break;
        }
 	}
}

void ingresarCodigoProducto() {
    printf("\nIngrese el código del producto (-1 para finalizar): ");
    scanf("%d", producto.codigoProducto);
}

void ingresarDescripcion() {
    printf("Ingrese la descripción del producto: ");
    scanf(" %[^\n]", producto.descripcion); 
}

void ingresarPrecio() {
    printf("Ingrese el precio de costo del producto: ");
    scanf("%d", producto.precio);
}

void calcularPrecioSugerido() {
    producto.precioSugerido = producto.precio * 1.30;
}


/*
Casos de prueba:

1)


2)


3)


4)


*/









