#include <iostream>
using namespace std;

int tam (char V[]){
    char *p1=V;
    char *p2=V;
    while (*p2 != '\0'){
        p2++;
    }
    return p2-p1;
}

char* invertir(char *s){
    char *t= new char[100]; // reserva de espacio de memoria
    int tam1 =tam(s);
    for (int i =0;i<tam1;i++){
        *(t+i)=*(s+tam1-1-i);
    }
    *(t+tam1)='\0';
    return t;
    delete t;
}

int main() {
  char cad[100] ="";
  cout<<"Cadena a invertir:  ";
  cin>> cad;
  cout<<"Palabra al revez: "<<invertir(cad)<<endl;
}
