#include <iostream>
using namespace std;
///EJERCICIO 01
/*int aumentar(int x)
{
    x=x+1;
    return x;
}
void multiplicar(int &x)
{
    x=x*10;
}*/
///EJERCICIO 03--- Insertion Sort
/*void insertion_sort(int s[], int n)
{
  int i,tmp;/// Se declara 2 variables enteras
  for (i=1; i<n; i++) { /// Un bucle que recorre la lista
    while ((i>0) && (s[i] < s[i-1])) {///Mientras la lista no este vacía y el elemento tomado sea menor que su antecesor
        tmp = s[i];                 ///Los elementos de la lista cambian de posicion
        s[i] = s[i-1];
        s[i-1] = tmp;
      i = i-1;                      ///regresa al elemento anterior para seguir la comparacion
    }
  }
}*/
///EJERCICIO 03--- Merge Sort
/*void MergeSort(int inicio,int fin,int *lista){
    if(fin - inicio == 0 || fin - inicio == 1)/// Se declara una excepcion por si la lista es vacia o de un solo elemento
        return;                             /// Retorna la misma
    int medio= (inicio + fin)/2;/// Se define el punto medio de la lista
    MergeSort(inicio,medio,lista);/// Se divide en sublista a la izquierda
    MergeSort(medio,fin,lista);/// Se divide en sublista a la derecha

    int puntero1 = inicio,
        puntero2 = medio,
        puntero3 = 0;

    int array[fin-inicio];/// Se define la mitad de la lista tomada

    ///Mezclamos las sub-lista de derecha y de izquierda, en el arreglo array.
    while(puntero1<medio || puntero2<fin){
        if(puntero1<medio && puntero2<fin){
            if(lista[puntero1]<lista[puntero2]){
                array[puntero3++] = lista[puntero1++];
            }else{
                array[puntero3++] = lista[puntero2++];
            }
        }else if(puntero1<medio){
            array[puntero3++] = lista[puntero1++];
        }else{
            array[puntero3++] = lista[puntero2++];
        }
    }
    for(int i=0;i<fin-inicio;i++){
        lista[inicio+i]=array[i];
    }
}*/
///EJERCICIO 03 --- Quick Sort
/*#include <iostream>
void leeCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<"Ingresa numero "<<i+1<<": ";
        cin>>n[i];
    }

}

void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<endl;
    }
}
void quicksort(int A[],int izq, int der )
{
int i, j, x , aux;
i = izq;
j = der;
x = A[ (izq + der) /2 ];
    do{
        while( (A[i] < x) && (j <= der) )
        {
            i++;
        }

        while( (x < A[j]) && (j > izq) )
        {
            j--;
        }

        if( i <= j )
        {
            aux = A[i]; A[i] = A[j]; A[j] = aux;
            i++;  j--;
        }

    }while( i <= j );

    if( izq < j )
        quicksort( A, izq, j );
    if( i < der )
        quicksort( A, i, der );
}
*/
///EJERCICIO 05
/*int tamano (int j,int c,char vect[])
{
    while(vect[j]!='\0')
    {
        c++;
        j++;
    }
    return c;
}*/

///EJERCICIO 05--- PUNTEROS
int tamlist(char A[])
{
    char *punt=&A[0];
    char *punto;
    int i=0;
    do
    {
        if(A[i]=='\0') punto=&A[i];
    }while(A[i++]!='\0');
    return punto-punt;
}
///EJERCICIO 09


int main()
{
    ///EJERCICIO 01
    /*int a=3,b=5;
    aumentar(a);
    multiplicar(b);
    cout<<aumentar(a)<<' '<<b<<endl;*/
    ///EJERCICIO 03--- Insertion Sort
    /*int vect[10] = {9,5,7,8,4,3,2,5,6,1};
    for (int i=0;i<10;i++)
    {
        cout<<vect[i];
    }
    cout<<' '<<endl;
    insertion_sort(vect,10);
    for (int i=0;i<10;i++)
    {
        cout<<vect[i];
    }*/
    ///EJERCICIO 03--- Merge Sort
    /*int lista[8]={9,10,5,1,2,6,7,15};

    for (int i=0;i<8;i++)
    {
        cout<<lista[i];
        cout<<' ';
    }
    cout<<' '<<endl;
    MergeSort(0,8,lista);
    for (int i=0;i<8;i++)
    {
        cout<<lista[i];
        cout<<' ';
    };*/
    ///EJERCICIO 03--- Quick Sort
    /*int largo=100;
    int A[largo],n;
    do{
    cout<<"Cantidad de numeros a ingresar: ";cin>>n;
        if(n<=0||n>largo)
            cout<<"Debe ingresar un valor  > a 0 y < a "<<largo<<endl;
    }while(n<=0||n>largo);
    leeCadena(n,A);
    quicksort(A,0,n-1);
    muestraCadena(n,A);*/
    ///EJERCICIO 05
    /*int i=0,cont=0;
    char A[]={'c','o','m','o','e','s','t','a','s'};
    cout<<"el tamaño es: "<<tamano(i,cont,A)<<endl;*/
    ///EJERCICIO 05--- PUNTEROS
    char B[100]={'h','o','l','i',' ','b','o','l','i'};
    cout<<tamlist(B)<<endl;
}
