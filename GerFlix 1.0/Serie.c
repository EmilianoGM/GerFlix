#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Serie.h"
#include <string.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarUnaSerie(eSerie serie)
{
    printf("%11d | %15s | %15s | %22d", serie.idSerie, serie.nombre, serie.genero, serie.cantidadTemporadas);
}

void mostrarListaSeries(eSerie listado[], int cantidad)
{
    int indice;
    if(listado != NULL && cantidad > 0)
    {
        printf("%s | %10s | %15s | %s\n", "ID de serie", "Nombre de serie", "Genero", "Cantidad de temporadas");
        for(indice = 0; indice < cantidad; indice++)
        {
            if(listado[indice].estado != 0)
            {
                mostrarUnaSerie(listado[indice]);
            }
        }
    }

}

int buscarIdSerie(eSerie listado[], int cantidad, int identificador)
{
    int retorno = -1;
    int indice;
    if(listado != NULL && cantidad > 0)
    {
        for(indice = 0; indice < cantidad; indice++)
        {
            if(listado[indice].idSerie == identificador)
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



