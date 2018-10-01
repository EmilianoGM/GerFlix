#include "Serie.h"

typedef struct
{
    int idUsuario;
    char nombre[50];
    int idSerie;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarUsuario(eUsuario usuario);
void mostrarUsuarioSinIdDeSerie(eUsuario usuario);
void mostrarListaUsuarios(eUsuario[], int);
void mostrarUsuarioConSuSerie(eUsuario usuario, eSerie listadoSeries[], int cantidad);
void mostrarListadoUsuarioConSuSerie(eUsuario listadoUsuario[], int cantidadUsuarios, eSerie listadoSerie[], int cantidadSeries);
