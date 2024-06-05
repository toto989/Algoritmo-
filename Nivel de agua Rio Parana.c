/*
El río Paraná presenta una histórica bajante en todo su cauce, y no se registran valores similares durante
abril desde hace más de 130 años. El nivel del agua apenas alcanza los 70 centímetros en algunos
sectores. Esta situación produce grandes pérdidas económicas, debido a que afecta en gran medida al
transporte fluvial. Las autoridades del gobierno desean conocer información de las alturas del río, a
efectos de relacionarlas con las pérdidas producidas. La Prefectura cuenta con los datos de la altura
máxima mensual del río Paraná, organizadas en dos series:
- Serie1: mayo/18 a abril/19
- Serie 2: mayo/19 a abril/20
Se requiere un informe con lo siguiente:
- cuál fue la menor altura en cada una de las dos series, y en qué mes ocurrió
- en qué serie se dio la menor altura.
*Nota:
- Utilizar vectores para almacenar las alturas en cada serie
- Para cargar las series, defina el/los módulos necesarios para la generación de la primera, y luego
reutilícelo/s para generar la segunda serie 

Nombre: Nivel de agua Rio Parana

Objetivo: Realizar un informe sobre el nivel del agua del Rio Parana

Estrategia: 
	-Ingresar datos.
	-Procesar los datos.
	-Mostrar informe.


Nombres representativos:
	-ingresarDatos
	-procesarDatos
	-mostrarInforme
*/


#include <stdio.h>
#include <string.h>
#define MESES 12
#define MESINICIAL 4

//Declaracion de la estructura que va a contener la serie de alturas.
typedef struct {
    float datos[MESES];
} Series;

//Declaracion de la estructura que contendra el resultado del calculo para una serie.
typedef struct {
	float alturaMax;
	int mesAlturaMax;
	float alturaMin;
	int mesAlturaMin;
}DatosCalculados;

char *nombresMeses[MESES] = {
    "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
};

//Declaracion de funciones.

Series ingresarDatos(int anio);
DatosCalculados procesarDatos(Series serie);
void mostrarInforme(DatosCalculados resultadoSerie);
int calcularMes(int mesActual);

//Declaracion de la variable para los bucles for.
int i;


int main(){

	//Llamadas a funciones para la serie 1.
	Series serie1 = ingresarDatos( 2018);
	DatosCalculados resultadoSerie1 = procesarDatos(serie1);
	mostrarInforme(resultadoSerie1);
	
	//Llamadas a funciones para la serie 2.
	Series serie2 = ingresarDatos( 2019);
	DatosCalculados resultadoSerie2 = procesarDatos(serie2);
	mostrarInforme(resultadoSerie2);
	
	return 0;
}

//Defino la funcion ingresarDatos de una serie.
Series ingresarDatos(int anio){

	//Defino variables locales.
	int anioActual = anio;
	int mesActual= MESINICIAL;
	float altura;
	Series serie;
	
	for( i = 0; i<MESES; i++){
		printf("Ingrese la altura del mes %s del año %d: \n", nombresMeses[mesActual], anioActual);
		scanf("%f", &serie.datos[i]);
		mesActual++;
		if(mesActual == 12){
			mesActual = 0;
			anioActual++;
		}
	}
	
	printf("--------------------------\n");	
	
	return serie;
}

//Defino la funcion para procesar los datos de una serie.
DatosCalculados procesarDatos(Series serieActual){

	//Defino variables locales.
	DatosCalculados resultado;
	resultado.mesAlturaMin = 0;
	resultado.alturaMin = 9999;
	resultado.mesAlturaMax = 0;
	resultado.alturaMax = -9999;
	
	for( i = 0; i<MESES; i++){
		if(serieActual.datos[i]<resultado.alturaMin){
			resultado.mesAlturaMin = i;
			resultado.alturaMin = serieActual.datos[i];
	
		}		
		
		if(serieActual.datos[i]>resultado.alturaMax){
			resultado.mesAlturaMax = i;
			resultado.alturaMax = serieActual.datos[i];
	
		}		
	}
	
	return resultado;
	
	
}

int calcularMes(int mesActual){
	
	mesActual = mesActual + MESINICIAL;
	if(mesActual>=MESES){
		mesActual = mesActual - MESES;
	}
	return mesActual;
}

//Defino la funcion que va a mostrar los resultados de la serie.
void mostrarInforme(DatosCalculados resultadoSerie){
	printf("\nAltura maxima de la serie ingresada: %f metros", resultadoSerie.alturaMax);
	int mesAlturaMax = calcularMes(resultadoSerie.mesAlturaMax);
	printf("\nSucedio en el mes %s\n", nombresMeses[mesAlturaMax]);
	printf("\nAltura minima de la serie ingresada: %f metros\n", resultadoSerie.alturaMin);
	int mesAlturaMin = calcularMes(resultadoSerie.mesAlturaMin);
	printf("Sucedio en el mes %s\n\n", nombresMeses[mesAlturaMin]);
}

/*
Casos de prueba:
1)
Altura maxima 20 en Octubre 2018 serie 1
Altura minima 2 en marzo del 2019 serie 1
(en el resto de los meses ponga valores de entre 5 a 10)

2)
Altura maxima 100 en Mayo del 2019 serie 2
Altura minima 5 en Enero del 2020 serie 2
(en el resto de los meses ponga valores de entre 10 a 50)


3)
Altura maxima 40 en Enero 2019 serie 1
Altura minima -2 en Noviembre 2018 serie 1
(en el resto de los meses ponga valores de entre -30 a 0)

4)
Altura maxima 77 en febrero 2019 serie 2
Altura minima -23 en Abril 2020 serie 2
(en el resto de los meses ponga valores de entre -20 a 70)

*/
