/*
Generar un vector A con 10 elementos de tipo char. A continuacion, a partir del vector A, generar un
vector B con los mismos elementos, pero en orden inverso. Luego imprimir simultaneamente ambos vectores.

Nota:
utilizar una funcion para generar el vector B.
Utilizar otra funcion para mostrar ambos vectores simultaneamente.

Nombre: Vectores A y B

Objetivo: Generar un vector A con 10 elementos de tipo char y generar un 
vector B con los mismos elementos, pero en orden inverso.

Estrategia:
	-Cargar datos en el vector A y B
	-Mostrar simultaneamente

Nombres representativos:
	-cargarVectores
	-mostrarSimultaneamente
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define A 10
#define B A

typedef char vectorA[A];

typedef struct {
    char a;
    char b;
    char c;
    char d;
    char e;
    char f;
    char g;
    char h;
    char i;
    char j;
} tv_vectorA;

typedef tv_vectorA vv_vectorA[A];

typedef char vectorB[B];

typedef tv_vectorA vv_vectorB[B];

// Prototipos de las funciones
void cargarVectores(vectorA vA, vv_vectorA vA_struct, vectorB vB, vv_vectorB vB_struct);
void mostrarSimultaneamente(vectorA vA, vv_vectorA vA_struct, vectorB vB, vv_vectorB vB_struct);

int i;

int main() {
    vectorA vA;
    vv_vectorA vA_struct;
    vectorB vB;
    vv_vectorB vB_struct;

    cargarVectores(vA, vA_struct, vB, vB_struct);
    mostrarSimultaneamente(vA, vA_struct, vB, vB_struct);

    return 0;
}

void cargarVectores(vectorA vA, vv_vectorA vA_struct, vectorB vB, vv_vectorB vB_struct) {
   
    // Cargar vectorA
    for (i = 0; i < A; i++) {
        vA[i] = 'A' + i;
    }
    
    // Cargar vv_vectorA
    for (i = 0; i < A; i++) {
        vA_struct[i].a = 'A' + i;
        vA_struct[i].b = 'B' + i;
        vA_struct[i].c = 'C' + i;
        vA_struct[i].d = 'D' + i;
        vA_struct[i].e = 'E' + i;
        vA_struct[i].f = 'F' + i;
        vA_struct[i].g = 'G' + i;
        vA_struct[i].h = 'H' + i;
        vA_struct[i].i = 'I' + i;
        vA_struct[i].j = 'J' + i;
    }
    
    // Cargar vectorB en orden inverso
    for (i = 0; i < B; i++) {
        vB[i] = vA[A - 1 - i];
    }
    
    // Cargar vv_vectorB en orden inverso
    for (i = 0; i < B; i++) {
        vB_struct[i].a = vA_struct[A - 1 - i].a;
        vB_struct[i].b = vA_struct[A - 1 - i].b;
        vB_struct[i].c = vA_struct[A - 1 - i].c;
        vB_struct[i].d = vA_struct[A - 1 - i].d;
        vB_struct[i].e = vA_struct[A - 1 - i].e;
        vB_struct[i].f = vA_struct[A - 1 - i].f;
        vB_struct[i].g = vA_struct[A - 1 - i].g;
        vB_struct[i].h = vA_struct[A - 1 - i].h;
        vB_struct[i].i = vA_struct[A - 1 - i].i;
        vB_struct[i].j = vA_struct[A - 1 - i].j;
    }
}

void mostrarSimultaneamente(vectorA vA, vv_vectorA vA_struct, vectorB vB, vv_vectorB vB_struct) {
    int i;
    printf("vector A:\n");
    for (i = 0; i < A; i++) {
        printf("%c ", vA[i]);
    }
    printf("\n");

    printf("\nvector B:\n");
    for (i = 0; i < B; i++) {
        printf("%c ", vB[i]);
    }
    printf("\n");
}

