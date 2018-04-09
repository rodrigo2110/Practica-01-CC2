#include <iostream>

using namespace std;
int strlen(char a[])
{
    char *ptr=&a[0];
    char *ptr2;
    int i=0;
    do
    {
        if(a[i]=='\0') ptr2=&a[i];
    }while (a[i++]!='\0');
    return ptr2-ptr;
}
void concat1 (char *a,char b[])
{
    a+=strlen(a);
    int lenb=strlen(b);
    for(char i=0;i<=lenb;i++)
    {
        *(a++)=b[i];
    }
}
void concat2(char *a,char *b)
{
    a+=strlen(a);
    int lenb=strlen(b);
    for(char i=0;i<=lenb;i++)
    {
        *(a++)=*(b++);
    }
}
int main()
{
    char A[100]={"hola tu "};
    char B[100]={"como vas"};
    concat1(A,B);
    cout<<A<<endl;
}
