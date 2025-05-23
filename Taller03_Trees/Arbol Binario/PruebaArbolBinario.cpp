//j

/**
 * Implementacion modular
 * Pontificia Universidad Javeriana
 * Bogota, Colombia
 */

#include<iostream>
#include "ArbolBinario.h"
#include "NodoBinario.h"

using namespace std;

main(int argc, char* argv[])
{	
	//crear arbol con el constructor por defectos
    ArbolBinario<int> arbolito;
	//se insertaran 7 datos
	for(int i=0; i<7; i++)
	{
		int dato;
		cin>>dato;
		arbolito.insertar(dato);
	}
	//Impresion de recorridos
	cout<<"El recorrido nivelOrden \n";
	arbolito.nivelOrden();
	cout<<"El recorrido inOrden \n";
	arbolito.inOrden();
	cout<<"El recorrido posOrden \n";
	arbolito.posOrden();
	cout<<"El recorrido preOrden \n";
	arbolito.preOrden();
}
