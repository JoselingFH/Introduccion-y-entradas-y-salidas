/* 4. Ejecute el programa del ejercicio anterior con entradas erróneas y observe los
resultados. Por ejemplo, introduzca un dato de tipo carácter cuando se espera un dato
de tipo entero. */

#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo;
	float alturaenmetros;
	
	cout<<"Digite la edad de la persona: "; cin>>edad;
	cout<<"Digite el sexo de la persona: "; cin>>sexo;
	cout<<"Digite la altura en metros de la persona: "; cin>>alturaenmetros;
	
	cout<<"\nLa edad de la persona es: "<<edad<<endl;
	cout<<"El sexo de la persona es: "<<sexo<<endl;
	cout<<"La altura en metros de la persona es: "<<alturaenmetros<<endl;
	
	
	return 0;
}
