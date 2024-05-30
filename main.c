#include <stdio.h>
#include "funciones.h"

int main() {
    Producto inventario[MAX_PRODUCTS];
    int numProductos;
    int opcion;

    inicializarInventario(inventario, &numProductos);

    do {
        printf("\n--- Sistema de Inventarios ---\n");
        printf("1. Ingresar producto\n");
        printf("2. Editar producto\n");
        printf("3. Eliminar producto\n");
        printf("4. Listar productos\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto(inventario, &numProductos);
                break;
            case 2:
                editarProducto(inventario, numProductos);
                break;
            case 3:
                eliminarProducto(inventario, &numProductos);
                break;
            case 4:
                listarProductos(inventario, numProductos);
                break;
            case 5:
                printf("Saliendo del sistema...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
