#include <iostream>
#include <stdio.h>
using namespace std;
int tamano(char *v)
{
    return (*v!='\0') ? 1 + tamano(v + 1) : 0;
}
void mostrar(char A[])
{
	for(int i=0;i<(tamano(A));i++)
	{
		cout<<*(A+i);
	}
}
void copiar(char A[],char m[])
{
	for(int i=0;i<tamano(m);i++)
	{
		*(A+i)=*(m+i);
	}
	return mostrar(A);
}
char* copiarpunt(char *p1,char *p2)
{
	char *p;
	for(p=p2;*p!='\0';p++,p1++) *p1=*p;
	*p1='\0';
}
int main(int arg1, char** arg2) {
	char *a=new char[40];
	char *b=new char[40];
	char x[40],y[40];
	cout<<"ingrese cadena: ";
	cin>>a;
	cout<<"ingrese cadena: ";
	cin>>b;
	cout<<"ingrese cadena: ";
	cin>>x;
	cout<<"ingrese cadena: ";
	cin>>y;
	copiarpunt(a,b);
	//cout<<a<<endl;
	copiar(x,y);
}
