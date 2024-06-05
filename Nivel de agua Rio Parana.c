/*
El r�o Paran� presenta una hist�rica bajante en todo su cauce, y no se registran valores similares durante
abril desde hace m�s de 130 a�os. El nivel del agua apenas alcanza los 70 cent�metros en algunos
sectores. Esta situaci�n produce grandes p�rdidas econ�micas, debido a que afecta en gran medida al
transporte fluvial. Las autoridades del gobierno desean conocer informaci�n de las alturas del r�o, a
efectos de relacionarlas con las p�rdidas producidas. La Prefectura cuenta con los datos de la altura
m�xima mensual del r�o Paran�, organizadas en dos series:
- Serie1: mayo/18 a abril/19
- Serie 2: mayo/19 a abril/20
Se requiere un informe con lo siguiente:
- cu�l fue la menor altura en cada una de las dos series, y en qu� mes ocurri�
- en qu� serie se dio la menor altura.
*Nota:
- Utilizar vectores para almacenar las alturas en cada serie
- Para cargar las series, defina el/los m�dulos necesarios para la generaci�n de la primera, y luego
reutil�celo/s para generar la segunda serie 

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
		printf("Ingrese la altura del mes %s del a�o %d: \n", nombresMeses[mesActual], anioActual);
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
