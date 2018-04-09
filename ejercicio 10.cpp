#include <stdio.h>
#include <iostream>
using namespace std;
int entero(char *str)
{
    int res = 0; //inicializamos el resultado
    for (int i = 0; str[i] != '\0'; ++i)
        res = res*10 + str[i] - '0';

    return res;
}

float flotante(char *x)
{
	float total=0, num;
	int df=10,i=0;
	bool decimal=false;
	while(x[i])
	{
		num=x[i]-'0';
		if(decimal)
		{
			num=num/df;
			df=df*10;
		}
		else if (!decimal && ( x[i]>='0' && x[i]<='9'))
			total=total*10;

		if(x[i]=='.' || x[i]==',' )
			decimal=true;
		else total+=num;

		i++;
	}
return total;
}
bool esDecimal(char *x)
{
    bool decimal=false;
    int i=0;
    while (x[i])
    {
        if(x[i]=='.' || x[i]==',' )
			decimal=true;
		i++;
    }
    return decimal;
}
void convFloat(char *x)
{
   if (esDecimal(x)==true)
   {
       cout<<flotante(x);
   }
   else
   {
       cout<<entero(x);
   }
}
int main()
{
    char A[100];
    cout<<"Ingrese un numero: ";
    cin>>A;
    convFloat(A);
    return 0;
}

