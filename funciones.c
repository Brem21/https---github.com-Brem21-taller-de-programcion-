#include <stdio.h>
#include <string.h>
#include "funciones.h"

void agregarArticulo(Articulo inventario[], int *numArticulos) {
    if (*numArticulos >= MAX_ARTICULOS) {
        printf("El inventario esta lleno. No se pueden agregar mas articulos.\n");
        return;
    }

    printf("Ingrese el nombre del articulo: ");
    scanf("%s", inventario[*numArticulos].nombre);
    printf("Ingrese la cantidad: ");
    scanf("%d", &inventario[*numArticulos].cantidad);
    printf("Ingrese el precio: ");
    scanf("%f", &inventario[*numArticulos].precio);

    (*numArticulos)++;
    printf("Articulo agregado exitosamente.\n");
}

void mostrarArticulos(Articulo inventario[], int numArticulos) {
    if (numArticulos == 0) {
        printf("No hay articulos en el inventario.\n");
        return;
    }

    printf("\nListado de Articulos:\n");
    for (int i = 0; i < numArticulos; i++) {
        printf("Articulo %d:\n", i + 1);
        printf("Nombre: %s\n", inventario[i].nombre);
        printf("Cantidad: %d\n", inventario[i].cantidad);
        printf("Precio: %.2f\n", inventario[i].precio);
    }
}

void buscarArticulo(Articulo inventario[], int numArticulos) {
    if (numArticulos == 0) {
        printf("No hay articulos en el inventario.\n");
        return;
    }

    char nombreBusqueda[MAX_NOMBRE];
    printf("Ingrese el nombre del articulo a buscar: ");
    scanf("%s", nombreBusqueda);

    for (int i = 0; i < numArticulos; i++) {
        if (strcmp(inventario[i].nombre, nombreBusqueda) == 0) {
            printf("Articulo encontrado:\n");
            printf("Nombre: %s\n", inventario[i].nombre);
            printf("Cantidad: %d\n", inventario[i].cantidad);
            printf("Precio: %.2f\n", inventario[i].precio);
            return;
        }
    }

    printf("Articulo no encontrado.\n");
}

void actualizarCantidad(Articulo inventario[], int numArticulos) {
    if (numArticulos == 0) {
        printf("No hay articulos en el inventario.\n");
        return;
    }

    char nombreBusqueda[MAX_NOMBRE];
    printf("Ingrese el nombre del articulo a actualizar: ");
    scanf("%s", nombreBusqueda);

    for (int i = 0; i < numArticulos; i++) {
        if (strcmp(inventario[i].nombre, nombreBusqueda) == 0) {
            printf("Articulo encontrado:\n");
            printf("Nombre: %s\n", inventario[i].nombre);
            printf("Cantidad actual: %d\n", inventario[i].cantidad);
            printf("Ingrese la nueva cantidad: ");
            scanf("%d", &inventario[i].cantidad);
            printf("Cantidad actualizada exitosamente.\n");
            return;
        }
    }

    printf("Articulo no encontrado.\n");
}
