/*Una tienda de mascotas necesita un programa para gestionar datos relacionados a los servicios 
proporcionados en el d�a y que emita informaci�n necesaria para el funcionamiento del local. En cada 
servicio ofrecido se registran los datos: n�mero de atenci�n, c�digo de tipo de servicio (1-venta de 
alimentos, 2-atenci�n a mascotas) e importe facturado. 
Los due�os del local desean saber, en cada servicio prestado, si es atenci�n a mascotas, que se 
muestre un mensaje que indique que recibi� atenci�n del veterinario. Ejemplo de salida en pantalla: 
*** Nro de atenci�n 12345 Recibi� atenci�n del veterinario! ***
Al finalizar la jornada, se debe realizar un cierre de caja e informar la cantidad de servicios prestados 
en el d�a, el importe total facturado y el monto promedio de facturaci�n por servicio.


-Nombre: tienda de mascotas
-Objetivo: gestionar servicios de la tienda de mascotas.
y que emita por cada servicio ofrecido (numero de atencion, codigo de tipo de servicio e importe facturado)
-Estrategia:
	-Ingresar numero de atencion.
	-Ingresar codigo de servicio (1-venta de alimentos, 2-atencion a mascotas).
	-Mostrar importe facturado.
-Nombres representativos:
	-numeroAtencion
	-tipoServicio(1-venta de alimentos, 2-atencion a mascotas)
		-cantidadServicios
	- calcularImporte
		-precio
		-importe
	-mostrarImporteFacturado
		-totalFacturado




#include <stdio.h>

	int numeroAtencion;
	char tipoServicio; 
	float calcularImporte;
	float mostrarImporteFacturado;

	int precio = 0;
	float importe = 0;
	float totalFacturado = 0;
	int cantidadServicios = 0;
	
int main(){
	
	numeroAtencion = 0;
    totalFacturado;
    cantidadServicios;
    
    printf("Ingrese los datos de los servicios prestados en el d�a.\n");
    printf("Para finalizar, ingrese -1.\n\n");

while (1) {
        printf("N�mero de atenci�n: ");
        scanf("%d", &numeroAtencion);

      
        if (numeroAtencion == -1) {
            break;
        }	

		printf("Tipo de servicio (1-venta de alimentos, 2-atenci�n a mascotas): ");
   	 	scanf("%d", &tipoServicio);
    
    	printf("Importe facturado: ");
    	scanf("%d", &precio);

		numeroAtencion = cantidadServicios;
		importe = numeroAtencion* cantidadServicios;


		if (tipoServicio == 2) {
            printf("*** Nro de atencion %d Recibi� atenci�n del veterinario! ***\n");	
			
		}
	

	}
	
	printf("Cantidad de servicios prestados en el d�a: %d\n", cantidadServicios);
    printf("Importe total facturado: %.2f\n", totalFacturado);
    
    if (cantidadServicios > 0) {
	
		importe = totalFacturado * cantidadServicios;
		printf("Importe de facturaci�n por servicio: %.2f\n", importe);
    }

	
	
}
*/
#include <stdio.h>

// Definici�n de la estructura para almacenar los datos de cada servicio
struct Servicio {
    int numeroAtencion;
    int tipoServicio;
    float importe;
};

int main() {
    // Definici�n de variables
    struct Servicio servicios[100]; // Se asume un m�ximo de 100 servicios
    int cantidadServicios = 0;
    float totalFacturado = 0;

    // Ingreso de datos de los servicios
    printf("Ingrese los datos de los servicios (n�mero de atenci�n, tipo de servicio, importe facturado):\n");
    printf("Ingrese -1 para finalizar.\n");

    while (1) {
        int numAtencion, tipoServicio;
        float importe;
        
        printf("N�mero de atenci�n: ");
        scanf("%d", &numAtencion);

        if (numAtencion == -1)
            break;

        printf("Tipo de servicio (1-venta de alimentos, 2-atenci�n a mascotas): ");
        scanf("%d", &tipoServicio);

        printf("Importe facturado: ");
        scanf("%f", &importe);

        servicios[cantidadServicios].numeroAtencion = numAtencion;
        servicios[cantidadServicios].tipoServicio = tipoServicio;
        servicios[cantidadServicios].importe = importe;

        cantidadServicios++;
        totalFacturado += importe;

        if (tipoServicio == 2) {
            printf("*** Nro de atenci�n %d Recibi� atenci�n del veterinario! ***\n", numAtencion);
        }
    }

    // Cierre de caja e informe
    printf("\n--- Cierre de caja ---\n");
    printf("Cantidad de servicios prestados en el d�a: %d\n", cantidadServicios);
    printf("Importe total facturado: %.2f\n", totalFacturado);
    
    if (cantidadServicios > 0) {
        float promedioFacturacion = totalFacturado / cantidadServicios;
        printf("Monto promedio de facturaci�n por servicio: %.2f\n", promedioFacturacion);
    } else {
        printf("No se realizaron servicios hoy.\n");
    }

    return 0;
}

