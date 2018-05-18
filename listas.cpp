#include <iostream>
using namespace std;

class nodo
{
	friend class ListaEnlazada;
	int dato;
	nodo *sig;
public:
	nodo(int a)
	{
		dato=a;
		sig=NULL;
	}
};

class ListaEnlazada{
	nodo *inicio;
	nodo *fin;
public:
	ListaEnlazada()
	{
		this -> inicio=NULL;
		this -> fin= NULL;
    }
	void insertarelemento(int dato){
        nodo *aux=new nodo(dato);
        if(inicio!=NULL){
            inicio->sig=aux;
        }
        else{
            fin=aux;
        }
        inicio=aux;
	}
	void mostrar()
	{
	    nodo *aux;
	    aux=fin;
	    while(aux!=NULL && inicio!=NULL){
            /*if(aux->dato<inicio->dato ){
                inicio=aux;
            }*/
            cout<<aux->dato<<endl;
            aux=aux->sig;
	    }
	}
	/*void eliminar(int dato){
        nodo *aux=new nodo(dato);
	    while(aux!=NULL){
           if(aux->dato!=fin->dato){
            aux=aux->sig;
            }
            else{
                delete(aux->dato);
            }
	    }
	}*/
	void ordenar()
	{
	    nodo *aux;
	    aux=fin;
	    while(aux!=NULL && inicio!=NULL){
            aux=aux->sig;
            if(aux->dato<inicio->dato){
                inicio=aux->sig;
            }
	    }

	}
};
int main(){
	ListaEnlazada lista;
	lista.insertarelemento(4);
	lista.insertarelemento(3);
	lista.insertarelemento(5);
	lista.insertarelemento(7);
	lista.mostrar();
	//lista.eliminar(4);
	//lista.mostrar();
	return 0;
}
