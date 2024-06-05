/*
Un complejo de cines necesita un informe sobre las entradas vendidas en el dia. Para obtener el informe,
cuenta con los siguientes datos de las entradas: código pelicula (1-Guardianes de la galaxia, 2-Super Mario Bros, 3-Caballeros del Zodiaco), 
codigo de turno (T-tarde, N-noche), numero de asiento, y si incluye combo candy (S-si, N-no).


Nombre: EntradasCine

Objetivo: elaborar un informe de venta de entradas de un complejo de cine

estrategia:
	-Ingresar datos de entrada.
	-Procesar entradas.
		mientras que haya mas entradas vendidas.
			-Procesar combo candy
			-Procesar super mario
	-Mostrar informe entradas.
	-Calcular porcentaje entradas vendidas.
	
Nombres representativos:
	-ingresarDatosEntrada
	-procesarEntradas
		mientras que haya mas entradas
			-procesarComboCandy
			-procesarSuperMario
	-informeEntradas
		-calcularPorcentajeEntradasVendidas




*/



#include <stdio.h>
#define TITULO "*** Cines de la costa - Venta de entradas ***"



void inicializarVariables();
void ingresarDatosEntrada();
void procesarEntradas();
void procesarComboCandy();
void procesarSuperMario();
void informeEntradas();
float porcentaje(int, int);


int codigoPelicula, nroAsiento;
int canTotalVendidas, canSuperMario;
char turno, comboCandy;

char respuesta;

int main(){
	
	inicializarVariables();
	ingresarDatosEntrada();
	procesarEntradas();
	informeEntradas();
	
	return 0;
	
}

void inicializarVariables(){
	canTotalVendidas = 0;
	canSuperMario = 0 ;
	
}

void ingresarDatosEntrada(){
	printf("Desea cargar datos de entradas? s/n: ");
	fflush(stdin);
	scanf("%c", &respuesta);
	if(respuesta == 's' || respuesta == 'S') {
		printf("\tCodigo de pelicula(1-Guardianes de la galaxia, 2-Super Mario Bros, 3-Caballeros del Zodiaco); ");
		scanf("%d", &codigoPelicula);
		printf("\tTurno (T-tarde, N-noche): ");
		fflush(stdin);
		scanf("%c", &turno);
		printf("\tNumero de asiento: ");
		scanf("%d", &nroAsiento);
		printf("\tCombo candy (S-si, N-no): ");
		fflush(stdin);
		scanf("%c", &comboCandy);
		
	}
}


void procesarEntradas() {
	while(respuesta == 's' || respuesta == 'S'){
	canTotalVendidas = canTotalVendidas + 1;
	procesarSuperMario();
	procesarComboCandy();
	ingresarDatosEntrada();
	
	}
	
}

void procesarSuperMario(){
	if (codigoPelicula == 2) {
		canSuperMario = canSuperMario +1;
		
	}
	
}

void procesarComboCandy(){
	if (turno == 't' || turno == 'T' && comboCandy == 'S' || comboCandy == 's'){
		printf("\n\t** Nro de asiento %d - Turno Tarde - Incluye combo candy! \n\n", nroAsiento);
	
	}
	
}

float porcentaje(int pCanSuperMario, int pCanTotalVendidas){
	return (float)pCanSuperMario / pCanTotalVendidas * 100;
}

void informeEntradas(){
	printf("\n\n %s", TITULO);
	printf("\n\nTotal de entradas vendidas: %d", canTotalVendidas);
	printf("\nCantidad de entradas vendidas para Super Mario: %d", canSuperMario);
	printf("\nPorcentaje entradas para Super Mario: (%%2.f %%)", porcentaje(canSuperMario,canTotalVendidas));
}

