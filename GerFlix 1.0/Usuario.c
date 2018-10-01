#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }
}

void mostrarUsuario(eUsuario usuario)
{
    printf("%13d | %10s | %11d", usuario.idUsuario , usuario.nombre, usuario.idSerie);
}

void mostrarUsuarioSinIdDeSerie(eUsuario usuario)
{
    printf("13%d | %10s", usuario.idUsuario , usuario.nombre);
}

void mostrarListaUsuarios(eUsuario listado[], int cantidad)
{
    int indice;
    if(listado != NULL && cantidad > 0)
    {
        printf("%13s | %10s | %s\n", "ID de usuario", "Nombre", "ID de serie");
        for(indice = 0; indice < cantidad; indice++)
        {
            if(listado[indice].estado !=  0)
            {
                mostrarUsuario(listado[indice]);
                printf("\n");
            }
        }
    }

}

void mostrarUsuarioConSuSerie(eUsuario usuario, eSerie listadoSeries[], int cantidad)
{
    int indice;
    if(usuario.estado != 0 && listadoSeries != NULL && cantidad > 0)
    {
        mostrarUsuarioSinIdDeSerie(usuario);
        indice = buscarIdSerie(listadoSeries, cantidad, usuario.idSerie);
        if(indice >= 0)
        {
            printf(" | ");
            mostrarUnaSerie(listadoSeries[indice]);
        }
    }
}

int buscarIdUsuario(eUsuario listado[], int cantidad, int identificador)
{
    int retorno = -1;
    int indice;
    if(listado != NULL && cantidad > 0)
    {
        for(indice = 0; indice < cantidad; indice++)
        {
            if(listado[indice].idUsuario == identificador)
            {
                retorno = -2;
                if(listado[indice].estado != 0)
                {
                    retorno = indice;
                    break;
                } else
                {
                    break;
                }
            }
        }
    }
    return retorno;
}

void mostrarListadoUsuarioConSuSerie(eUsuario listadoUsuarios[], int cantidadUsuarios, eSerie listadoSeries[], int cantidadSeries)
{
    int indice;
    if(listadosUsuario != NULL && cantidadUsuarios > 0 && listadoSeries != NULL && cantidadSeries > 0)
    {
        printf("%13s | %10s | %11s | %10s | %15s | %s\n", "ID de usuario", "Nombre", "ID de serie", "Nombre", "Genero", "Cantidad de temporadas");
        for(indice = 0; indice < cantidadUsuarios; indice++)
        {
            if(listadoUsuario[indice].estado != 0)
            {
                mostrarUsuarioConSuSerie(listadoUsuarios[indice], listadoSeries, cantidadSeries);
                printf("\n");
            }
        }
    }
}

void mostrarListadoSeriesConUsuarios(eSerie listadoSeries[], int cantidadSeries, eUsuario listadoUsuario, int cantidadUsuarios)
{
    int indice;
    if(listadoUsuario != NULL && cantidadUsuarios > 0 && listadoSeries != NULL && cantidadSeries > 0)
    {
        for(indice = 0; indice < cantidadSeries; indice++)
        {

        }
    }
}
