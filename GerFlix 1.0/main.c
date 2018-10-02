#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/
    printf("%13s | %10s | %11s | %15s | %15s | %s\n", "ID de usuario",
            "Nombre", "ID de serie", "Nombre de serie", "Genero", "Cantidad de temporadas");
    mostrarUsuarioConSuSerie(listaDeUsuarios[1], listaDeSeries, TAMSERIE);
    //(listaDeUsuarios, TAMUSUARIO, listaDeSeries, TAMSERIE);



    return 0;
}
