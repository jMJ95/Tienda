#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void ListArti(){
    printf("Ha seleccionado la opcion Listar Articulos");
    return;
    printf("\n");
}
void introArti(){
    char nuart;

    printf("Ha seleccionado la opcion Listar Articulos");
    scanf("%c",&nuart);
    printf("\n");
    fflush(stdin)
    printf("\n");
}
void ElimArti(){
    printf("Ha seleccionado la opcion Listar Articulos");
    return;
    printf("\n");
}
void menuPrinc(){
    int capdat;
    printf("Bienvenido al Gestor de compras MyStoreSystem \n");
    printf("1-Listar Articulos \n");
    printf("2-Introducir Articulos \n");
    printf("3-Eliminar Articulos \n");
    printf("4-Salir \n");
    printf( "Porfavor elija una opcion => " );
    scanf("%i", capdat);

    switch(capdat){
        case 1:
            ListArti();
        break;
        case 2:
            introArti();
        break;
        case 3:
            ElimArti();
        break;
        default:
            printf("\n\n no selecciono una opcion porfavor elija una ");
    }

}

int main()
{
   menuPrinc();
    return 0;
}
