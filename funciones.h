#ifndef INVENTARIO_H
#define INVENTARIO_H

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50

typedef struct {
    char nombre[MAX_NAME_LENGTH];
    int cantidad;
    float precio;
} Producto;

void inicializarInventario(Producto inventario[], int *numProductos);
void ingresarProducto(Producto inventario[], int *numProductos);
void editarProducto(Producto inventario[], int numProductos);
void eliminarProducto(Producto inventario[], int *numProductos);
void listarProductos(Producto inventario[], int numProductos);

#endif // INVENTARIO_H
