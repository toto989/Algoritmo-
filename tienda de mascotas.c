/*Una tienda de mascotas necesita un programa para gestionar datos relacionados a los servicios 
proporcionados en el día y que emita información necesaria para el funcionamiento del local. En cada 
servicio ofrecido se registran los datos: número de atención, código de tipo de servicio (1-venta de 
alimentos, 2-atención a mascotas) e importe facturado. 
Los dueños del local desean saber, en cada servicio prestado, si es atención a mascotas, que se 
muestre un mensaje que indique que recibió atención del veterinario. Ejemplo de salida en pantalla: 
*** Nro de atención 12345 Recibió atención del veterinario! ***
Al finalizar la jornada, se debe realizar un cierre de caja e informar la cantidad de servicios prestados 
en el día, el importe total facturado y el monto promedio de facturación por servicio.


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
    
    printf("Ingrese los datos de los servicios prestados en el día.\n");
    printf("Para finalizar, ingrese -1.\n\n");

while (1) {
        printf("Número de atención: ");
        scanf("%d", &numeroAtencion);

      
        if (numeroAtencion == -1) {
            break;
        }	

		printf("Tipo de servicio (1-venta de alimentos, 2-atención a mascotas): ");
   	 	scanf("%d", &tipoServicio);
    
    	printf("Importe facturado: ");
    	scanf("%d", &precio);

		numeroAtencion = cantidadServicios;
		importe = numeroAtencion* cantidadServicios;


		if (tipoServicio == 2) {
            printf("*** Nro de atencion %d Recibió atención del veterinario! ***\n");	
			
		}
	

	}
	
	printf("Cantidad de servicios prestados en el día: %d\n", cantidadServicios);
    printf("Importe total facturado: %.2f\n", totalFacturado);
    
    if (cantidadServicios > 0) {
	
		importe = totalFacturado * cantidadServicios;
		printf("Importe de facturación por servicio: %.2f\n", importe);
    }

	
	
}
*/
#include <stdio.h>

// Definición de la estructura para almacenar los datos de cada servicio
struct Servicio {
    int numeroAtencion;
    int tipoServicio;
    float importe;
};

int main() {
    // Definición de variables
    struct Servicio servicios[100]; // Se asume un máximo de 100 servicios
    int cantidadServicios = 0;
    float totalFacturado = 0;

    // Ingreso de datos de los servicios
    printf("Ingrese los datos de los servicios (número de atención, tipo de servicio, importe facturado):\n");
    printf("Ingrese -1 para finalizar.\n");

    while (1) {
        int numAtencion, tipoServicio;
        float importe;
        
        printf("Número de atención: ");
        scanf("%d", &numAtencion);

        if (numAtencion == -1)
            break;

        printf("Tipo de servicio (1-venta de alimentos, 2-atención a mascotas): ");
        scanf("%d", &tipoServicio);

        printf("Importe facturado: ");
        scanf("%f", &importe);

        servicios[cantidadServicios].numeroAtencion = numAtencion;
        servicios[cantidadServicios].tipoServicio = tipoServicio;
        servicios[cantidadServicios].importe = importe;

        cantidadServicios++;
        totalFacturado += importe;

        if (tipoServicio == 2) {
            printf("*** Nro de atención %d Recibió atención del veterinario! ***\n", numAtencion);
        }
    }

    // Cierre de caja e informe
    printf("\n--- Cierre de caja ---\n");
    printf("Cantidad de servicios prestados en el día: %d\n", cantidadServicios);
    printf("Importe total facturado: %.2f\n", totalFacturado);
    
    if (cantidadServicios > 0) {
        float promedioFacturacion = totalFacturado / cantidadServicios;
        printf("Monto promedio de facturación por servicio: %.2f\n", promedioFacturacion);
    } else {
        printf("No se realizaron servicios hoy.\n");
    }

    return 0;
}

