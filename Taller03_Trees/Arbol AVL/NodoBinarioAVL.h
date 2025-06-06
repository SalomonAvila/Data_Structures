//j

/**
 * Implementacion modular
 * Pontificia Universidad Javeriana
 * Bogota, Colombia
 */

#ifndef NODOBINARIOAVL_H
#define NODOBINARIOAVL_H

template <class T>

class NodoBinarioAVL{
	public:
		T dato;
		NodoBinarioAVL<T> *hijoIzq;
		NodoBinarioAVL<T> *hijoDer;

	public:
		NodoBinarioAVL();
		~NodoBinarioAVL();
		T& getDato();
		void setDato(T& val);
		NodoBinarioAVL<T>* getHijoIzq();
		NodoBinarioAVL<T>* getHijoDer();
		void setHijoIzq(NodoBinarioAVL<T>* izq);
		void setHijoDer(NodoBinarioAVL<T>* der);
};

#include "NodoBinarioAVL.hxx"

#endif //NODOBINARIOAVL_H
