#ifndef __NODO__H__
#define __NODO__H__

using namespace std;
#include <queue>

template< class T >
class Nodo{
  protected:
    T dato;
    vector<Nodo <T> > hijos;

  public:
  	Nodo();
  	Nodo(T valor);
  	int altura();
  	int tamano();
    T& obtenerDato();
    void fijarDato(T& val);
    void limpiarLista();
    void adicionarDesc(T& val);
    bool eliminarDesc(T &val);
    void preOrden();
    void posOrden();
    void inOrden();
    void nivelOrden(queue<Nodo*> &cola);
    Nodo* buscar(T val);
};

#include "nodo.hxx"
#endif
