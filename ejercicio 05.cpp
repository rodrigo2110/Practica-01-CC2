#include <iostream>

using namespace std;
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
int main()
{
    ///EJERCICIO 05
    /*int i=0,cont=0;
    char A[]={'c','o','m','o','e','s','t','a','s'};
    cout<<"el tamaño es: "<<tamano(i,cont,A)<<endl;*/
    ///EJERCICIO 05--- PUNTEROS
    char B[100]={'h','o','l','i',' ','b','o','l','i'};
    cout<<tamlist(B)<<endl;
}
