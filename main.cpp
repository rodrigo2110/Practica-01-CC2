#include<iostream>
#include<cstdlib>
using namespace std;

struct nodo{
    int nro;
    struct nodo *sgte;
};

typedef struct nodo *Puntero;

class Cola{
    public:
        Cola();
        void Encolar(int);
        int Desencolar();
        bool ColaVacia();
        void MostrarCola();
        void VaciarCola();

    private:
        Puntero delante;//puntero al primer elemento de la cola
        Puntero atras;//puntero al ultimo elemento de la cola

};


Cola::Cola(){
    delante=NULL;//inicializamos los punteros
    atras=NULL;
}

bool Cola::ColaVacia(){

    if(delante==NULL)
        return true;
    else return false;
}
void Cola::Encolar(int x){

     Puntero p_aux;

     p_aux=new(struct nodo);
     p_aux->nro=x;
     p_aux->sgte=NULL;

     if(delante==NULL)
        delante=p_aux;
     else atras->sgte=p_aux;

     atras=p_aux;
}

int Cola::Desencolar(){

    int n;
    Puntero p_aux;

    p_aux=delante;
    n=p_aux->nro;
    delante=(delante)->sgte;
    delete(p_aux);
    return n;
}

void Cola::MostrarCola(){
    Puntero p_aux;
     p_aux=delante;
     while(p_aux!=NULL){
        cout<<"\n"<<p_aux->nro;
        p_aux=p_aux->sgte;
     }

}

void Cola::VaciarCola(){

     Puntero p_aux,r_aux;
     p_aux=delante;
     while(p_aux!=NULL){
        r_aux=p_aux;
        p_aux=p_aux->sgte;
        delete(r_aux);
     }
     delante=NULL;
     atras=NULL;
}

int main(){
    Cola cola;
    cola.ColaVacia();
    cout<<endl;
    cola.Encolar(5);
    cola.Encolar(4);
    cola.Encolar(3);
    cola.MostrarCola();
    cout<<endl;
    cola.Desencolar();
    cola.MostrarCola();
    return 0;
}
